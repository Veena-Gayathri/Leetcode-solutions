class Solution:
    def maxDepth(self, s: str) -> int:
        cnt = 0
        max_count=0
        for c in s:
            if c == ')':
                cnt-=1
            if c == '(':
                cnt+=1
                max_count= max(max_count,cnt)
        return max_count
