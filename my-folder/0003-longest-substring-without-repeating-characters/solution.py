class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        last_seen = [-1] * 128
        left = 0
        max_len = 0
        
        for right, char in enumerate(s):
            idx = ord(char)
            
            if last_seen[idx] >= left:
                left = last_seen[idx] + 1
            
            last_seen[idx] = right
            max_len = max(max_len, right - left + 1)
        
        return max_len

