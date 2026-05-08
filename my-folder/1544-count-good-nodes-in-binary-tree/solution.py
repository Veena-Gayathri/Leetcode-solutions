# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        # idea: count with dfs while keeping track of max with each node.
        count = 0
        def dfs(node, mx = float('-inf')):
            if not node:
                return
            
            nonlocal count
            if node.val >= mx:
                count += 1
                mx = node.val
            
            dfs(node.left, mx)
            dfs(node.right, mx)
        
        dfs(root)
        return count


