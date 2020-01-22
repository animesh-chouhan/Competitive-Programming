n = int(input())
# n = 1

# for t1 in range(1, n+1):
#     sum = 0
#     sum += t1/n
#     if n-t1 > 0:
#         for t2 in range(1, n+1-t1):
#             sum += t2/(n-t1)
#             if n-t1-t2 > 0:
#                 for t3 in range(1, n+1-t1-t2):
#                     sum += t3/(n-t1-t2)
#                     if n-t1-t2-t3 > 0:
#                         for t4 in range(1, n+1-t1-t2-t3):
#                             sum += t4/(n-t1-t2-t3)
#                             print(sum, t1, t2, t3, t4)
#                             sum = 0
#                     else:
#                         print(sum, t1, t2, t3)
#                         sum = 0
#             else:
#                 print(sum, t1, t2)
#                 sum = 0
#     else:
#         print(sum, t1)
#         sum = 0


def all(n, sum=0):
    for t1 in range(1, n+1):
        sum += t1/n
        if n-t1 > 0:
            all(n-t1, sum)
    else:
        print(sum)


all(n)
