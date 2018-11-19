class Solution(object):
    def postorderTraversal(self, root):
        '''
        145. Binary Tree Postorder Traversal
        https://leetcode.com/problems/binary-tree-postorder-traversal/solution/
        '''
        if root is None:
            return []
        stack, output = [root, ], []
        while stack:
            root = stack.pop()
            output.append(root.val)
            if root.left is not None:
                stack.append(root.left)
            if root.right is not None:
                stack.append(root.right)
        return output[::-1]