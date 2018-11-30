class Solution:
    def pivotIndex(self, nums):
        """
        724. Find Pivot Index
        https://leetcode.com/problems/find-pivot-index/
        """
        S = sum(nums)
        leftSum = 0
        for i, x in enumerate(nums):
            if(leftSum == S - leftSum - x):
                return i
            leftSum += x
        return -1
        