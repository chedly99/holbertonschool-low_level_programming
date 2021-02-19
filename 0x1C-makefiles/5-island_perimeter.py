#!/usr/bin/python3
"""Perimeter"""


def island_perimeter(grid):
    """island Perimeter"""

    if not grid:
        return 0
    Perimeter = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                Perimeter += 4
                if grid[x][y-1] == 1 and y - 1 >= 0:
                    Perimeter -= 2
                if grid[x - 1][y] == 1 and x - 1 >= 0:
                    Perimeter -= 2
    return Perimeter
