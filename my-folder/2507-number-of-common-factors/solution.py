class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        res = []
        for i in range(1,max(a,b)+1):
            if a% i == 0 and b % i == 0:
                res.append(i)
        return len(res)
