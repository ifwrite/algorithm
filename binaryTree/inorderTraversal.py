class Solution(object):
    def inorderTraversal(self, root):
        """
        94. Binary Tree Inorder Traversal
        https://leetcode.com/problems/binary-tree-inorder-traversal/
        """
        if root is None:
            return []
        stack, output = [], []
        p = root
        while (stack or p):    
            while p:
                stack.append(p)
                p = p.left
            p = stack.pop()
            output.append(p.val)
            p = p.right
        return output