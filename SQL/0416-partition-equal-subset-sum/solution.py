

class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        def Solve(nums: List[int], total: int, n: int, arr: List[List[int]]) -> bool:
            if total == 0:
                return True
            if n == 0 or total < 0:
                return False
            if arr[n][total] != -1:
                return arr[n][total] == 1
            
            include_current = Solve(nums, total - nums[n - 1], n - 1, arr)
            exclude_current = Solve(nums, total, n - 1, arr)
            
            arr[n][total] = 1 if include_current or exclude_current else 0
            return include_current or exclude_current

        total = sum(nums)
        if total % 2 != 0:
            return False
        
        target = total // 2
        arr = [[-1 for _ in range(target + 1)] for _ in range(len(nums) + 1)]
        
        return Solve(nums, target, len(nums), arr)


# class Solution:
    
#     def canPartition(self, nums: List[int]) -> bool:
#         def Solve(nums: List[int], total:int, n: int, arr: List[int]) -> int:
#             print(n)
#             print(total)

#             if total-1 == 0:
#                 arr[n][total]= 1
#             if n-1 == 0:
#                 arr[n][total]=0
#             if arr[n-1][total-1] != -1:
#                 return arr[n-1][total-1]
#             if nums[n-1]<=total:
#                 arr[n][total]= Solve(nums, total-nums[n-1]-1,n-1,arr) or Solve(nums, total-1,n-1,arr) 
#             else:
#                 arr[n][total]= Solve(nums, total-1,n-1,arr)
#             return arr[n][total]

#         total=0
#         for n in nums:
#             total +=n
#         if total%2!=0:
#             return False
#         else:
#             arr = [[-1 for _ in range(len(nums)+1)]for _ in range((total//2)+1)] 
#             # arr = [[-1]*(len(nums)+1) for i in range(int((total/2)+1))]
#             k= Solve(nums, (total//2)+1, len(nums)+1,arr)
#             for i in arr:
#                 for j in i:
#                     print(j)
#             return k
    
