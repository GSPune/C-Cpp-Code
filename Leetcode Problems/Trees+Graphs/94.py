# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

def inorder(root,ans):
    if (root != None):
            inorder(root.left,ans)
            ans.append(root.val)
            inorder(root.right,ans)

class Solution:
    def inorderTraversal(self, root) -> list[int]:
        ans = []
        inorder(root,ans)
        return ans

    