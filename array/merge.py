class Solution(object):
    def merge(self, nums1, m, nums2, n):
        '''
        88. Merge Sorted Array
        https://leetcode.com/problems/merge-sorted-array/
        '''

        while m > 0 and n > 0:
            # 从数组最后开始比
            if nums1[m - 1] >= nums2[n - 1]:
                nums1[m + n - 1] = nums1[m - 1]
                m -= 1
            elif nums1[m - 1] < nums2[n - 1]:
                nums1[m + n - 1] = nums2[n - 1]
                n -= 1
        if n > 0:
            nums1[:n] = nums2[:n]
        
    