"""
M_multiply_constant module
"""


def mul_by(m1, c):
    """
    multiple function by a constant
    - m1
    - c
    Return: m1 x c
    """
    return [[m1[i][j] * c for j in range(len(m1[0]))] for i in
            range(len(m1))]
