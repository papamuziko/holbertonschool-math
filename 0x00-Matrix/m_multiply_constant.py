"""
M_multiply_constant module
"""


def mul_by(m1, i):
    """
    multiple function by a constant
    - m1
    - i
    Return: m1 x i
    """
    return [[m1[i][j] * i for j in range(len(m1[0]))] for i in
            range(len(m1))]
