import os
import re

url_regex = "(http|https)://(www\.|)([\.A-Za-z0-9_-]+)\.([a-zA-Z]+)(|/|/.{1,})"
rex_INPUT = re.compile(
    "^"+url_regex+"$", re.IGNORECASE)


def getUrl(canSkip=True):
    if canSkip:
        print("To skip enter 'S' (case sensitive)")
    url = input("Enter problem link for folder's Readme.md\n")
    if url:
        rex_filter = rex_INPUT.findall(url)
        if len(rex_filter) == 0:
            print("Unfortunate the url you entered is invalid make sure it is in the following format (http/https)://(www/).*.com")
        while len(rex_filter) == 0:
            url = input("Enter a valid url: \n")
            if url == "S" and canSkip:
                return None
            rex_filter = rex_INPUT.findall(url)
    return url


exclude_folders = [".git", ".vscode"]
problem_folders = [folder for folder in next(
    os.walk("./"))[1] if folder not in exclude_folders]

main_readme_data = {}

print("Enter git repo base link, example https://github.com/Rikveet/Kattis-Solutions, if you enter a wrong url your repo links will not work on the table.")
git_repo_link = getUrl(False)

special_identifier = []
keyword = input("If there are any special keywords you use for your links in problem folder's readme please enter them one by one finally enter with any input to finish loading keywords : \n")
while keyword:
    special_identifier.append(keyword)
rex_README = re.compile("^\[(.*?)("+"|".join(special_identifier) +
                        ")(.*?)]\("+url_regex+"\)$", re.IGNORECASE)

for folder in problem_folders:
    files = os.listdir(folder)
    main_readme_data[folder] = {
        "name": "["+folder+"]("+git_repo_link+"/"+folder+")",
        "link": ""
    }
    if "README.md" not in files:
        readme_file = open("./"+folder+"/README.md", "x")
        print("for the following inputs just press enter if you want to skip that info in the README.md of the folder")
        heading = input("enter heading for readme for" + folder + "\n")
        description = input("enter any description you want to use.\n")
        url = getUrl()
        output = ""
        if heading:
            output += "# "+heading + "\n"
        if description:
            output += description + "\n"
        if url:
            main_readme_data[folder]["link"] = "[Link]("+url+")"

            output += main_readme_data[folder]["link"]
        readme_file.write(output)
        readme_file.close()
    else:
        readme_file = open("./"+folder+"/README.md", "r")
        print("Reading Readme from", folder)
        for line in readme_file.readlines():
            possible_url = rex_README.findall(line)
            if len(possible_url) != 0:
                main_readme_data[folder]["link"] = "[Link]("+"".join(
                    possible_url[3:])+")"
                break
        if not main_readme_data[folder]["link"]:
            print("Could not find a link in ", folder,
                  " repo please enter the link")
            main_readme_data[folder]["link"] = getUrl()

print(main_readme_data)
