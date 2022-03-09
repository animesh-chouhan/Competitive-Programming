def findLonely(self, nums: list[int]) -> list[int]:
    nums.sort()

    ret = []
    for i in range(0, len(nums) - 1):
        if nums[i] != nums[i+1]:
            if (nums[i] != nums[i+1] - 1):
                ret.append(nums[i])

    return list(set(ret))
