def countElements(self, nums: list[int]) -> int:
    mini = min(nums)
    maxi = max(nums)

    cnt = 0
    for num in nums:
        if num > mini and num < maxi:
            cnt += 1

    return cnt
