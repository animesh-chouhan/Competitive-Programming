def minMoves(target: int, maxDoubles: int) -> int:
    c = 0
    while target > 0:
        if maxDoubles > 0:
            if target % 2 == 0:
                c += 1
                target = int(target / 2)
                maxDoubles -= 1
            else:
                c += 1
                target -= 1
        else:
            break

    return target + c - 1
