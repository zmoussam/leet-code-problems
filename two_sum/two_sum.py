def two_sum(nums, target):
    previous_values = {}
    for i in range(len(nums)):
        curr = nums[i]
        need = target - curr
        if need in previous_values:
            return [previous_values[need], i]
        else:
            previous_values[curr] = i
print(two_sum([3,2,4], 6))