class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        dict1=defaultdict(int)
        mx=0
        rs=0
        n= len(nums)
        flag =0
        for i in range(k):
            if nums[i] in dict1:
                flag+=1
                dict1[nums[i]]+=1
            else:
                dict1[nums[i]]=1
            rs+= nums[i]
        if flag==0:
            mx=max(rs,mx)
        for i in range(k,n,1):
            dict1[nums[i-k]]-=1
            if dict1[nums[i-k]]>0:
                flag -=1
            if nums[i] in dict1:
                dict1[nums[i]]+=1
            else:
                dict1[nums[i]]=1
            if dict1[nums[i]] >1:
                flag +=1
            rs+=(nums[i]-nums[i-k])
            if flag==0:
                mx = max(mx,rs)
        return mx

