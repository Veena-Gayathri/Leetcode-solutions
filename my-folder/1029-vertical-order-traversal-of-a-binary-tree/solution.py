# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def verticalTraversal(self, root: Optional[TreeNode]) -> List[List[int]]:
        nodes = []
        def dfs(node,row,col):
            if not node:
                return
            nodes.append((col, row, node.val))
                
            dfs(node.left,row+1,col-1)
            dfs(node.right,row+1,col+1)
            

        dfs(root,0,0)
        nodes.sort()

        result = collections.defaultdict(list)

        for col, row, val in nodes:
            result[col].append(val)

        return [result[x] for x in sorted(result)]

'''
        pos_maps = defaultdict(list)

        q = deque([(root, 0, 0)])
        low_col , high_col = 0,0
        low_row, high_row = 0,0
        while q:
            node, x, y = q.popleft()
            pos_maps[(x,y)].append(node.val)
            low_col = min(low_col, y)
            high_col = max(high_col, y)
            low_row = min(low_row, x)
            high_row = max(high_row, x)
            if node.left:
                q.append([node.left, x+1, y-1])
            if node.right:
                q.append([node.right, x+1, y+1])

        res = []
        for col in range(low_col, high_col + 1):
            col_values = []
            for row in range(low_row, high_row + 1):
                if (row, col) in pos_maps:
                    vals = sorted(pos_maps[(row, col)])
                    col_values.extend(vals)
            res.append(col_values)

        return res
'''



            
