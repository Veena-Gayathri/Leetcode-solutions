
class Solution:
    def findMin(self, nums: List[int]) -> int:
        start , end = 0 , len(nums)-1

        while start<end:
            mid = start + (end- start)//2
            if nums[end] > nums[mid] :
                end = mid
            elif nums[end]< nums[mid]:
                #this part is not sorted, check to the right
                start = mid+1
            else:
                end-=1
            

        return nums[start]
                


