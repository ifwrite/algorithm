class Solution:
    '''
    1. Two Sum
    https://leetcode.com/problems/two-sum/
    '''

    #暴力
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for i in range(len(nums) - 1):
            for j in range((i + 1), len(nums)):
                if nums[i] + nums[j] == target:
                    return [i, j]
    
    #hash
    def twoSum1(self, nums, target):
        keys = {}
        for i in range(len(nums)):
            if target - nums[i] in keys:
                return[keys[target - nums[i]], i]
            if nums[i] not in keys:
                keys[nums[i]] = i