#!/usr/bin/python3
""" determines if all the boxes can be opened """


def canUnlockAll(boxes):
    """ determine if all the boxes can be opened
    Parameter: boxes is a list of lists
    Return: True if all the boxes can be opened
    """
    unlocked = True
    box = 1
    key = 0
    for box in boxes[box]:
        if boxes[box][key] == box or boxes[box][key] <= len(boxes):
            key += 1
            continue
        else:
            return False
    return True
