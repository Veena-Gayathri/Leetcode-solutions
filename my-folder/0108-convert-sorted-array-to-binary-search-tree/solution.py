# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        def BST(start, end):
            if start>= end:
                return None
            mid = start + (end - start) // 2
            # print(mid)
            node = TreeNode(nums[mid])
            node.left = BST(start, mid)
            node.right = BST(mid+1, end)
            return node
        return BST(0, len(nums))


