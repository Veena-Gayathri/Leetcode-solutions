class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        dp = [False]*(len(s)+1)
        dp[0] = True
        for i in range(1,len(s)+1):
            for j in wordDict:
                if i >= len(j) and dp[i-len(j)] and s[i-len(j):i]==j:
                    dp[i] = True
                    break
        print(dp)
        return dp[-1]

