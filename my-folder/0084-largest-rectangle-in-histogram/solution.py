class Solution:
    
    def largestRectangleArea(self, heights: List[int]) -> int:
        maxArea = 0
        stack = [] #contains pair (index, height)
        for ix, ht in enumerate(heights):
            start = ix
            while stack and stack[-1][1] > ht:
                n_ix, n_ht = stack.pop()
                maxArea = max(maxArea, n_ht * (ix- n_ix))
                start = n_ix
            stack.append((start,ht))
        for i,h in stack:
            maxArea = max(maxArea, h * (len(heights)- i))
        return maxArea


