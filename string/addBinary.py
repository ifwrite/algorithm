class Solution:
    def addBinary(self, a, b):
        """
        67. Add Binary
        https://leetcode.com/problems/add-binary/
        """
        res = ''
        i, j, plus = len(a) - 1, len(b) - 1, 0
        while i >= 0 or j >= 0 or plus == 1:
            plus += int(a[i]) if i >= 0 else 0
            plus += int(b[j]) if j >= 0 else 0
            res = str(plus % 2) + res
            i, j, plus = i - 1, j - 1, plus // 2
        return res
        