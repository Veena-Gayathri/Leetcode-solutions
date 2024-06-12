class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map <long long,long long> mp;
        long long mx = 0, n=nums.size(),running_sum=0, flag =0;
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>1) flag +=1;
            running_sum+=nums[i];
        }
        if(flag==0) mx= max(running_sum,mx);
        for(int i = k;i<n;i++){
            if(--mp[nums[i-k]]>0) flag --;
            if(++mp[nums[i]]>1) flag++;
            running_sum+= nums[i];
            running_sum-=nums[i-k];
            if(flag==0) mx=max(running_sum,mx);
        }
        return mx;
    }
};
