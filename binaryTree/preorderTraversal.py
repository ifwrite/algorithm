class Solution(object):
    def preorderTraversal(self, root):
        '''
        144. Binary Tree Preorder Traversal
        https://leetcode.com/problems/binary-tree-preorder-traversal/
        '''
        if root is None:
            return []
        stack, output = [root,], []
        while stack:    
            root = stack.pop()
            if root is not None:
                output.append(root.val)
                if root.right is not None:
                    stack.append(root.right)
                if root.left is not None:
                    stack.append(root.left)
        return output
            