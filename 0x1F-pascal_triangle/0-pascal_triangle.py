#!/usr/bin/python3
"""
Function pascal_triangle(n)
"""


def pascal_triangle(n):
    """
    Function that returns a list of lists of integers
    representing the Pascal’s triangle of n:
    Arguments:
    n: integer representing number of rows
    Returns:
    an empty list if n <= 0
    You can assume n will be always an integer
    """
    triangle = []
    if n <= 0:
        return triangle
    for row in range(1, (n+1)):
        new_row = []
        for column in range(row):
            new_row.append(1)
        triangle.append(new_row)
        for row in range(len(triangle)):
            for column in range(row):
                if column != 0:
                    triangle[row][column] = triangle[
                        row - 1][column] + triangle[row - 1][column - 1]
    return triangle
