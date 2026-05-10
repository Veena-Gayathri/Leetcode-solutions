# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
from collections import deque
class Codec:

    def serialize(self, root):
        """Encodes a tree to a single string.
        
        :type root: TreeNode
        :rtype: str
        """
        if not root:
            return ""
        queue = deque([root])
        result = []
        while queue:
            node = queue.popleft()
            if node:
                result.append(str(node.val))
                queue.append(node.left)
                queue.append(node.right)
            else:
                result.append("null")
        return "_".join(result)
        

    def deserialize(self, data):
        """Decodes your encoded data to tree.
        
        :type data: str
        :rtype: TreeNode
        """
        if data == "":
            return None
        node_values = data.split("_")
        root = TreeNode(int(node_values[0]))

        queue = deque([root])
        index = 1

        while queue:
            node = queue.popleft()
            left_str = node_values[index]

            if left_str != "null":
                node.left = TreeNode(int(left_str))
                queue.append(node.left)
            index+=1

            right_str = node_values[index]
            if right_str!="null":
                node.right = TreeNode(int(right_str))
                queue.append(node.right) 

            index+=1

        return root       

# Your Codec object will be instantiated and called as such:
# ser = Codec()
# deser = Codec()
# ans = deser.deserialize(ser.serialize(root))
