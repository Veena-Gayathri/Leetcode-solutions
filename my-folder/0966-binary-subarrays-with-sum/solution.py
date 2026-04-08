class Solution:
    def numSubarraysWithSum(self, nums: List[int], goal: int) -> int:
        pri = {0:1}  # prefix sum counts
        res = 0
        summ = 0
        for i in nums:
            summ += i
            res += pri.get(summ - goal, 0)
            pri[summ] = pri.get(summ, 0) + 1
        return res
        # def atMostsum(arr, k):
        #     start = 0
        #     r_sum=0
        #     cnt=0
        #     for end in range(0,len(arr)):
        #         r_sum += arr[end]
        #         while r_sum >k :
        #             r_sum -= arr[start]
        #             start+=1
                
        #         cnt+= (end-start+1)

        #     return cnt
        
        # if goal==0:
        #     return atMostsum(nums,goal) 
        # return atMostsum(nums, goal) - atMostsum(nums, goal -1)
                


