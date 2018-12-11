class Solution:
    def minSubArrayLen(self, s, nums):
        """
        209. Minimum Size Subarray Sum
        https://leetcode.com/problems/minimum-size-subarray-sum/
        O(n)
        """
        left, right, total, length, res = 0, 0, 0, len(nums), len(nums) + 1
        while right < length:
            while total < s and right < length:
                total += nums[right]
                right += 1
            while total >= s:
                res = min(res, right - left)
                total -= nums[left]
                left += 1
    
        return 0 if res == len(nums) + 1 else res 
