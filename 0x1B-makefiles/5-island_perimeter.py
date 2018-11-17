#!/usr/bin/python3
"""
Module for island perimeter function
"""


def island_perimeter(grid):
    """ island_perimeter - calculates the perimeter of an island """
    grid_len = len(grid)
    list_len = len(grid[0])
    perimeter = 0
    i = 0
    while i < grid_len:
        if sum(grid[i]) != 0:
            j = 0
            while j < list_len:
                if grid[i][j] == 1:
                    perimeter += check_surrounding(grid, i, j)
                    print ("perimeter after checking cell{}.{}: {}".format(i, j, perimeter))
                j += 1
        i += 1
    return perimeter


def check_surrounding(grid, coord1, coord2):
    """ check_surrounding - gets the perimeter of a cell """
    cell = grid[coord1][coord2]
    last_list = len(grid) - 1
    list_end = len(grid[0]) - 1
    if coord1 == 0:
        if coord2 == 0:
            under = check_under(grid, coord1, coord2)
            right = check_r(grid, coord1, coord2)
            return 2 + under + right
        elif coord2 == list_end:
            under = check_under(grid, coord1, coord2)
            left = check_l(grid, coord1, coord2)
            return 2 + under + left
        else:
            under = check_under(grid, coord1, coord2)
            right = check_r(grid, coord1, coord2)
            left = check_l(grid, coord1, coord2)
            return 1 + under + right + left
    elif coord1 == last_list:
        if coord2 == 0:
            up = check_up(grid, coord1, coord2)
            right = check_r(grid, coord1, coord2)
            return 2 + up + right
        elif coord2 == list_end:
            up = check_up(grid, coord1, coord2)
            left = check_l(grid, coord1, coord2)
            return 2 + up + left
        else:
            up = check_up(grid, coord1, coord2)
            right = check_r(grid, coord1, coord2)
            left = check_l(grid, coord1, coord2)
            return 1 + up + right + left
    else:
        if coord2 == 0:
            up = check_up(grid, coord1, coord2)
            under = check_under(grid, coord1, coord2)
            right = check_r(grid, coord1, coord2)
            return 1 + up + under + right
        elif coord2 == list_end:
            up = check_up(grid, coord1, coord2)
            under = check_under(grid, coord1, coord2)
            left = check_l(grid, coord1, coord2)
            return 1 + up + under + left
        else:
            up = check_up(grid, coord1, coord2)
            under = check_under(grid, coord1, coord2)
            left = check_l(grid, coord1, coord2)
            right = check_r(grid, coord1, coord2)
            return up + under + left + right


def check_up(grid, coord1, coord2):
    """ check_up - checks the upper side of a cell """
    upper = grid[coord1 - 1][coord2]
    if upper == 0:
        return 1
    return 0


def check_under(grid, coord1, coord2):
    """ check_under - checks the under side of a cell """
    under = grid[coord1 + 1][coord2]
    if under == 0:
        return 1
    return 0


def check_l(grid, coord1, coord2):
    """ check_l - checks the left side of a cell """
    left = grid[coord1][coord2 - 1]
    if left == 0:
        return 1
    return 0


def check_r(grid, coord1, coord2):
    """ check_right - checks the right side of a cell """
    right = grid[coord1][coord2 + 1]
    if right == 0:
        return 1
    return 0
