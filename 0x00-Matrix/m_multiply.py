"""
M_multiply module
"""


def mul(m1, m2):
    """
    multiple 2 matrices function
    - m1
    - m2
    Return: m1 x m2
    """
    res = [[0 for x in range(len(m1))] for y in range(len(m2))]
  
    for i in range(len(m1)):
        for j in range(len(m2[0])):
            for k in range(len(m2)):
                res[i][j] += m1[i][k] * m2[k][j]
    
    return res
