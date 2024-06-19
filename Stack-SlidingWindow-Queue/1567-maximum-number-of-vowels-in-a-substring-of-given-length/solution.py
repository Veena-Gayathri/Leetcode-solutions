class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        count = 0
        vowels = "aeiou"
        for i in range(k):
            if s[i] in vowels:
                count += 1

        p1, p2 = 0, k-1
        maximum = count
        while p2 < len(s):
            if s[p1] in vowels:
                count -= 1
            
            if p2 + 1 != len(s) and s[p2+1] in vowels:
                count += 1
            
            if count > maximum:
                maximum = count
            p1 += 1
            p2 += 1


        return maximum
