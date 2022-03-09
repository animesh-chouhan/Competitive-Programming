s = input()


def checkString(s: str) -> bool:
    if "ba" in s:
        return False
    else:
        return True


print(checkString(s))
