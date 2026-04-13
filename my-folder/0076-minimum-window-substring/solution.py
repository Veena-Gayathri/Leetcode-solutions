class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if not s or not t:
            return ""
        
        t_el = {}
        for c in t:
            t_el[c] = t_el.get(c, 0) + 1
        
        required = len(t_el)
        formed = 0
        
        window_counts = {}
        l = 0
        ans = float('inf'), None, None
        
        for r in range(len(s)):
            char = s[r]
            window_counts[char] = window_counts.get(char, 0) + 1
            
            if char in t_el and window_counts[char] == t_el[char]:
                formed += 1
            
            while l <= r and formed == required:
                char = s[l]
                
                if r - l + 1 < ans[0]:
                    ans = (r - l + 1, l, r)
                
                window_counts[char] -= 1
                if char in t_el and window_counts[char] < t_el[char]:
                    formed -= 1
                
                l += 1
        
        return "" if ans[0] == float('inf') else s[ans[1]:ans[2]+1]
