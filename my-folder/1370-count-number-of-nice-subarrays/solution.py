class Solution:
    def numberOfSubarrays(self, nums: List[int], k: int) -> int:


        nums = [1 if x % 2 else 0 for x in nums]
        pri = {0:1}  # prefix sum counts
        res = 0
        summ = 0
        for i in nums:
            summ += i
            res += pri.get(summ - k, 0)
            pri[summ] = pri.get(summ, 0) + 1
        return res
        
        # def atMost(k):
        #     left = 0
        #     count = 0
        #     res = 0
            
        #     for right in range(len(nums)):
        #         if nums[right] == 1:
        #             count += 1
                
        #         while count > k:
        #             if nums[left] == 1:
        #                 count -= 1
        #             left += 1
                
        #         res += (right - left + 1)
            
        #     return res
        
        # return atMost(k) - atMost(k - 1)
