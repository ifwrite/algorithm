class Solution:
    def plusOne(self, digits):
        """
        66. Plus One
        https://leetcode.com/problems/plus-one
        """
        for i in range(len(digits)):
            if digits[-i] < 9:
                digits[-i] += 1
                return digits
            digits[-i] = 0
        return [1] + [0] * len(digits)