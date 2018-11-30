class Solution:
    def dominantIndex(self, nums):
        """
        747. Largest Number At Least Twice of Others
        https://leetcode.com/problems/largest-number-at-least-twice-of-others/
        """
        m = max(nums)
        if all(m >= 2*x for x in nums if x != m):
            return nums.index(m)
        return -1