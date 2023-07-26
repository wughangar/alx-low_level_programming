#!/usr/bin/python3

"""
Technical interview preparation
"""


def island_perimeter(grid):
    """
    function that returns the perimeter of the island decribed in a grid.
    the grid:
        its a list of integers.
        0: represents a water zone
        1: represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally)
        Grid is rectangular, width and height does not exceed 100
        Grid is completely surrounded by water, and there is one island.
        The island doesnt have lakes.
    """
    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < rows - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < cols - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter
