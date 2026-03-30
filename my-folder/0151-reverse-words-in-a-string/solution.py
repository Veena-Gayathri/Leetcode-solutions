class Solution:
    def reverseWords(self, s: str) -> str:
    # Convert string to list for in-place operations
        s = list(s)
        
        # Step 1: Remove extra spaces
        def clean_spaces(s):
            n = len(s)
            i = 0  # write pointer
            j = 0  # read pointer
            while j < n:
                # skip spaces
                while j < n and s[j] == ' ':
                    j += 1
                # copy word
                while j < n and s[j] != ' ':
                    s[i] = s[j]
                    i += 1
                    j += 1
                # add single space if next word exists
                while j < n and s[j] == ' ':
                    j += 1
                if j < n:
                    s[i] = ' '
                    i += 1
            return s[:i]
        
        s = clean_spaces(s)
        
        # Helper to reverse a portion in-place
        def reverse(l, r):
            while l < r:
                s[l], s[r] = s[r], s[l]
                l += 1
                r -= 1
        
        # Step 2: Reverse the entire string
        reverse(0, len(s) - 1)
        
        # Step 3: Reverse each word
        start = 0
        for end in range(len(s) + 1):
            if end == len(s) or s[end] == ' ':
                reverse(start, end - 1)
                start = end + 1
        
        return "".join(s)





        # # return " ".join(s.split()[::-1])
        # # Convert to list for in-place simulation
        # s = list(s.strip())
        
        # # Helper to reverse a portion
        # def reverse(l, r):
        #     while l < r:
        #         s[l], s[r] = s[r], s[l]
        #         l += 1
        #         r -= 1
        
        # # Step 1: remove extra spaces
        # i = 0
        # for j in range(len(s)):
        #     if s[j] != ' ' or (i > 0 and s[i-1] != ' '):
        #         s[i] = s[j]
        #         i += 1
        # s = s[:i] if i == 0 or s[i-1] != ' ' else s[:i-1]
        
        # # Step 2: reverse whole string
        # reverse(0, len(s) - 1)
        
        # # Step 3: reverse each word
        # start = 0
        # for end in range(len(s) + 1):
        #     if end == len(s) or s[end] == ' ':
        #         reverse(start, end - 1)
        #         start = end + 1
        
        # return "".join(s)

