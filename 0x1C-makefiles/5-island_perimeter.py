#!/usr/bin/python3
"""
This module contains one function that calculates and return
the island perimeter.
Current file: 5-island_perimeter.py
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the grid by summing the length of the
    outer sides of each cell of the grid.

    grid (grid): A list of lists.

    Return:
         The final perimeter of the grid.
    """
    if len(grid) == 0:
        return 0

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0]) - 1):
            if grid[i][j] != grid[i][j + 1]:
                perimeter = perimeter + 1

    for i in range(len(grid[0])):
        for j in range(len(grid) - 1):
            if grid[j][i] != grid[j + 1][i]:
                perimeter = perimeter + 1

    for i in range(len(grid)):
        if grid[i][0] == 1:
            perimeter = perimeter + 1
        if grid[i][len(grid[0]) - 1] == 1:
            perimeter = perimeter + 1

    for j in range(len(grid[0])):
        if grid[0][j] == 1:
            perimeter = perimeter + 1
        if grid[len(grid) - 1][j] == 1:
            perimeter = perimeter + 1

    return perimeter
