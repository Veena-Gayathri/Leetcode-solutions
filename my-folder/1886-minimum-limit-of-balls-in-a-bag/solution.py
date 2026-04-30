import heapq
class Solution:

    def minimumSize(self, nums: List[int], maxOperations: int) -> int:
        
        def can(mid):
            ops = 0
            for x in nums:
                ops += (x - 1) // mid
            return ops <= maxOperations

        left, right = 1, max(nums)
        
        while left < right:
            mid = (left + right) // 2
            
            if can(mid):
                right = mid
            else:
                left = mid + 1
        
        return left
