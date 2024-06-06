class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        total = 0
        prev = prices[0]
        for i in prices:
            if(i-prev >= 0):
                total += i- prev
            prev = i
        return total
                
