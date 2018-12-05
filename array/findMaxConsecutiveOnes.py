class Solution:
    def findMaxConsecutiveOnes(self, nums):
        """
        485. Max Consecutive Ones
        https://leetcode.com/problems/max-consecutive-ones/
        """
        ans = cnt = 0
        for num in nums:
            if num == 1:
                cnt += 1
                ans = max(ans, cnt)
            else:
                cnt = 0
        return ans
            