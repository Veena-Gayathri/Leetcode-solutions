class Solution:
    def smallestDistancePair(self, nums: List[int], k: int) -> int:
        def count_pairs(d)-> bool:
            count,i, j = 0,0,0
            while i<n or j<n:
                while j<n and nums[j]- nums[i]<= d:
                    j+=1
                count += j-i-1
                i+=1
            return count>=k

        nums.sort()
        left, right, n = 0, nums[-1]- nums[0], len(nums)
        while left< right:
            mid = left + (right - left)//2
            if not count_pairs(mid):
                left = mid+1
            else:
                right = mid
        return left

