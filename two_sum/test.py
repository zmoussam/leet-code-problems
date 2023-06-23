def two_sum(nums, target):
    hash_map = {}
    for i in range(len(nums)):
        needValue = target - nums[i]
        if needValue in hash_map:
            return [hash_map[needValue], i]
        else:
            hash_map[nums[i]] = i
print(two_sum([3,2,4], 6))


        