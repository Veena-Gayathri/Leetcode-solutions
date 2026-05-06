class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        if not root:
            return None
        
        if root == p or root == q:
            return root

        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)
        
        if left and right:   # p and q found on both sides
            return root

        # return whichever side found something
        return left if left else right  




        
        # def tracking_ancestry(stack, root, target_node):
        #     if not root:
        #         return None
        #     stack.append(root)
            
        #     if root == target_node:
        #         return stack
        #     left_res = tracking_ancestry(stack, root.left, target_node)
        #     if left_res is not None:
        #         return left_res  
        #     right_res = tracking_ancestry(stack, root.right, target_node)
        #     if right_res is not None:
        #         return right_res  
            
        #     stack.pop()
        #     return None

        # p_stack = tracking_ancestry([], root, p)
        # q_stack = tracking_ancestry([], root, q)

        # q_set = set(q_stack)
        # for i in range(len(p_stack) - 1, -1, -1):
        #     if p_stack[i] in q_set:
        #         return p_stack[i] 
        # return root
