# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def binaryTreePaths(self, root: Optional[TreeNode]) -> List[str]:
        
        def paths( root, path = []):
            if not root:
                return
            if not root.left and not root.right:
                path += [root.val]
                res.append('->'.join(map(str,path)))
                return
            
            paths(root.left, path+[root.val])
            paths(root.right, path+[root.val])
        
        res = []
        paths(root)
        return res

