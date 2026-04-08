class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        rs,start,sz,mx = 0,0,0,0
        for end in range(len(nums)):
            rs+=nums[end]
            
            while end - start +1-rs>k :
                rs-=nums[start]
                start+=1
           
            mx = max(mx, end - start + 1)
        return mx

