class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0,sum=0;
        unordered_map<int,int> mp;
        mp[sum] = 1;
        for(int it:nums){
            sum+=it; 
            if(mp.find(sum-k)!=mp.end()) ans+=mp[sum-k];
            mp[sum]++;
        }
                               
        return ans;
    }
};
