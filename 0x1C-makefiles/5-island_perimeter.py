#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if (grid[i][j] == 1):
                if (i - 1) == -1 or grid[i - 1][j] == 0:
                    perimeter += 1
                if (i + 1) == nrows or grid[i + 1][j] == 0:
                    perimeter += 1
                if (j - 1) == -1 or grid[a][j - 1] == 0:
                    perimeter += 1
                if (j + 1) == ncolumns or grid[i][j + 1] == 0:
                    perimeter += 1
    return (perimeter)
