class Solution(object):
    def removeElement(self, nums, val):
        '''
        27. Remove Element
        https://leetcode.com/problems/remove-element/
        '''
        k = 0
        for idx, num in enumerate(nums):
            if num != val:
                nums[k] = nums[idx]
                k = k+1
        return k