"""
M_adding module
"""


def add(m1, m2):
    """
    add function
    - m1
    - m2
    Return: m1 + m2
    """
    return [[m1[i][j] + m2[i][j] for j in range(len(m1[0]))] for i in
            range(len(m1))]
