class Solution:
    def spiralOrder(self, matrix):
        """
        54. Spiral Matrix
        https://leetcode.com/problems/spiral-matrix/
        """
        if (matrix is None or len(matrix) == 0):
            return []
        rows = len(matrix)
        cols = len(matrix[0])
        level = (min(rows, cols) + 1) // 2
        result = []
        for currLevel in range(0, level):
            firstRow = currLevel
            firstCol = currLevel
            lastRow = rows - currLevel - 1
            lastCol = cols - currLevel - 1
            if firstRow == lastRow:
                for col in range(firstCol, lastCol + 1):
                    result.append(matrix[firstRow][col])
                return result
            if firstCol == lastCol:
                for row in range(firstRow, lastRow + 1):
                    result.append(matrix[row][firstRow])
                return result
            for col in range(firstCol, lastCol):
                result.append(matrix[firstRow][col])
            for row in range(firstRow, lastRow):
                result.append(matrix[row][lastCol])
            for col in range(lastCol, firstCol, -1):
                result.append(matrix[lastRow][col])
            for row in range(lastRow, firstRow, -1):
                result.append(matrix[row][firstCol])
        return result