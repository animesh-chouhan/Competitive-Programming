def divideString(s: str, k: int, fill: str) -> list[str]:
    l = []
    for i in range(0, len(s), k):
        if i + k < len(s):
            l.append(s[i:i+k])
        else:
            l.append(s[i:])

    n = len(l[-1])
    if n != k:
        l[-1] += fill * (k-n)

    return l
