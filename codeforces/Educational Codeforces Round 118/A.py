t = int(input())

for _ in range(t):
    x1, p1 = [int(i) for i in input().split()]
    x2, p2 = [int(i) for i in input().split()]

    # Convert to scientific notation

    l1 = len(str(x1))
    l2 = len(str(x2))
    n1 = x1 / (10 ** (l1 - 1))
    n2 = x2 / (10 ** (l2 - 1))
    pow1 = p1 + l1 - 1
    pow2 = p2 + l2 - 1

    if(n1 > n2):
        if(pow1 >= pow2):
            print(">")
        else:
            print("<")
    elif(n2 > n1):
        if(pow2 >= pow1):
            print("<")
        else:
            print(">")
    else:
        if(pow1 > pow2):
            print(">")
        elif(pow2 > pow1):
            print("<")
        else:
            print("=")
