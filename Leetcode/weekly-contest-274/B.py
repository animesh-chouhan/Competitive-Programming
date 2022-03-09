def numberOfBeams(bank: list[str]) -> int:
    m = len(bank[0])
    n = len(bank)

    c = 0

    for i in range(m):
        for j in range(n):
            flag = False
            if bank[j][i] == "1":
                for k in range(j+1, n):
                    if bank[k].count("1") != 0:
                        c += bank[k].count("1")
                        break

    return c


print(numberOfBeams(["011001", "000000", "010100", "001000"]))
