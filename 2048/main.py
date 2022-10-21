# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.


def solve():
    grid = [[int(x) for x in input().split(" ")] for _ in range(4)]
    direction = input()

    # left or right default
    row_start = 0
    row_end = len(grid)
    row_inc = 1

    # up or down default
    col_start = 0
    col_end = len(grid[0])
    col_inc = 1
    if direction == "0":
        for row in range(0, len(grid)):
            for col in range(len(grid) - 1, 0, -1):
                if grid[row][col] == grid[row][col - 1]:
                    grid[row][col - 1] += grid[row][col]
                    grid[row][col] = 0


# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    solve()

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
