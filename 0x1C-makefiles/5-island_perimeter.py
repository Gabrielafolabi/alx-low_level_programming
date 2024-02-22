#!/usr/bin/python3
"""Defining 5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of an island""
    a = 0
    height = len(grid) - 1
    width = len(grid[0]) - 1

    for x, y in range(grid):
        for b, n in range(y):
            if n == 1:
                if x == 0 or grid[x- 1][b] != 1:
                    a += 1
                if b == 0 or grid[x][b - 1] != 1:
                    a += 1
                if b == width or grid[x][b + 1] != 1:
                    a += 1
                if x == length or grid[x + 1][b] != 1:
                    a += 1
    return a
