#!/usr/bin/python3
"""
Calculate minimum number of operations to copy all and paste
in a text editor.
"""


def minOperations(n):
    """
    In a text file, there is a single character H. Your text editor
    can execute only two operations in this file: Copy All and Paste.
    Given a number n, write a method that calculates the fewest number
    of operations needed to result in exactly n H characters in the file.
    Arguments:
    n: (int) number of H characters
    Return:
    integer or 0 if n is impossible to achieve
    """
    if n <= 1:
        return 0
    if type(n) is not int:
        return 0

    oper = 0
    i = 2
    while i <= n:
        if n % i == 0:
            oper += i
            n = n / i
        else:
            i += 1

    return (oper)
