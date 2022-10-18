#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    string s1,s2;
    int n;
    cin >> n;
    while (n>0) {
        cin.ignore();
        for( int k=0;k<n;k++) {
            getline(cin, str);
            int multiply_factor = str.length();
            for (int i = 1; i < str.length(); i++) {
                s1 = str.substr(0, i);
                s2 = "";
                for (int j = 0; j < int(multiply_factor / i)+1 ; j++) {
                    s2 += s1;
                }
                if (s2.substr(0, str.length()).compare(str) == 0) {
                    cout << s1.length() << endl;
                    break;
                }
            }
        }
        cin >> n;
    }
    return 0;
}
