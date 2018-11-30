class Solution:
    def findDiagonalOrder(self, matrix):
        """
        498. Diagonal Traverse
        https://leetcode.com/problems/diagonal-traverse/
        """
        if not matrix:  return []
        i, j, k = 0, 0, 1
        w, h = len(matrix), len(matrix[0])
        ans = []
        for x in range(w * h):
            ans.append(matrix[i][j])
            if k > 0:
                di, dj = i - 1, j + 1
            else:
                di, dj = i + 1, j - 1
            if 0 <= di < w and 0 <= dj < h:
                i, j = di, dj
            else:
                if k > 0:
                    if j + 1 < h:
                        j += 1
                    else:
                        i += 1
                else:
                    if i + 1 < w:
                        i += 1
                    else:
                        j += 1
                k *= -1
        return ans