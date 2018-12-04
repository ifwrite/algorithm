class Solution:
    def arrayPairSum(self, nums):
        """
        561. Array Partition I
        https://leetcode.com/problems/array-partition-i/
        """
        return sum(sorted(nums)[::2])
        