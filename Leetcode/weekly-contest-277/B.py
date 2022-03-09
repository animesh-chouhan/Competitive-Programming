def rearrangeArray(self, nums: list[int]) -> list[int]:
    pos = []
    neg = []

    for num in nums:
        if num > 0:
            pos.append(num)
        else:
            neg.append(num)

    ret = []
    for i in range(int(len(nums)/2)):
        ret.append(pos[i])
        ret.append(neg[i])

    return ret
