class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        first = {0:0}
        curr = 0
        ans = 0
        for i in range(len(nums)):
            curr+= 1 if nums[i]==1 else -1
            if curr in first:
                ans = max(ans, i+1-first[curr])
            else:
                first[curr] = i+1
        return ans
