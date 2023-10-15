class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        hash_map = {}
        for i in range(len(nums)):
            needValue = target - nums[i]
            if needValue in hash_map:
                return [hash_map[needValue], i]
            else:
                hash_map[nums[i]] = i
    