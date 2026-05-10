# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def recoverTree(self, root: Optional[TreeNode]) -> None:
        """
        Do not return anything, modify root in-place instead.
        """
        first , second, prev = None, None, TreeNode(float('-inf'))

        def inorder(root):
            if not root:
                return
            nonlocal first, second, prev
            inorder(root.left)
            if not first and prev.val > root.val:
                first = prev
            if first and root.val < prev.val:
                second = root
            prev = root
            inorder(root.right)

        inorder(root)

        temp = first.val
        first.val = second.val
        second.val = temp


