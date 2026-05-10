# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def countPairs(self, root: Optional[TreeNode], distance: int) -> int:
        good_pair = 0

        def postOrder(root):
            nonlocal good_pair

            if not root:
                return []

            if not root.left and not root.right:
                return [1]

            left_dist = postOrder(root.left)
            right_dist = postOrder(root.right)

            for l in left_dist:
                for r in right_dist:
                    if l + r <= distance:
                        good_pair += 1

            return [d + 1 for d in left_dist + right_dist if d + 1 < distance]

        postOrder(root)
        return good_pair            



###O(L**2 * N ) solution
        # leaves = []

        # def collect(node):
        #     if not node:
        #         return

        #     if not node.left and not node.right:
        #         leaves.append(node)

        #     collect(node.left)
        #     collect(node.right)

        # collect(root)

        # def lca(node, p, q):
        #     if not node or node == p or node == q:
        #         return node

        #     left = lca(node.left, p, q)
        #     right = lca(node.right, p, q)

        #     if left and right:
        #         return node

        #     return left or right

        # def depth(node, target, d):
        #     if not node:
        #         return -1

        #     if node == target:
        #         return d

        #     left = depth(node.left, target, d + 1)

        #     if left != -1:
        #         return left

        #     return depth(node.right, target, d + 1)

        # ans = 0

        # for i in range(len(leaves)):
        #     for j in range(i + 1, len(leaves)):

        #         ancestor = lca(root, leaves[i], leaves[j])

        #         d1 = depth(ancestor, leaves[i], 0)
        #         d2 = depth(ancestor, leaves[j], 0)

        #         if d1 + d2 <= distance:
        #             ans += 1

        # return ans
