def longestPalindrome(self, words: list[str]) -> int:

    l1 = []
    l2 = []
    for word in words:
        if word[0] == word[1]:
            l1.append(word)
        elif word[::-1] in words:
            l2.append(word)

    total = len(l2) * 2

    odd = []
    for word in l1:
        cnt = l1.count(word)
        if cnt % 2 == 0:
            total += cnt * 2

        else:
            odd.append(word)
            total += (cnt - 1) * 2

    if len(odd) > 0:
        total += 2

    return total
