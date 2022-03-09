from copy import deepcopy


def checkValid(matrix: list[list[int]]) -> bool:
    n = len(matrix)

    check = list(range(1, n+1))

    flag = True

    for row in matrix:
        if sorted(row) != check:
            flag = False

    columns = []
    for j in range(n):
        l = []
        for i in range(n):
            l.append(matrix[i][j])
        columns.append(l)

    for col in columns:
        if sorted(col) != check:
            flag = False
    return flag


print(checkValid([[1, 2, 3], [3, 1, 2], [2, 3, 1]]))
print(checkValid([[1, 1, 1], [1, 2, 3], [1, 2, 3]]))
