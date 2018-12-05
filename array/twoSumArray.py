class Solution:
    def twoSum(self, numbers, target):
        """
        1. Two Sum
        https://leetcode.com/problems/two-sum/
        """
        idxDict = dict()
        for idx, num in enumerate(numbers):
            if target - num in idxDict:
                return [idxDict[target - num] + 1, idx + 1]
            idxDict[num] = idx
        