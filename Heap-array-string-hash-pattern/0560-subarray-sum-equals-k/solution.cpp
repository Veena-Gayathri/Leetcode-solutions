class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count =0, n=nums.size();
        unordered_map <int,int> mp;
        mp[nums[0]] = 1;
        if(nums[0]==k) count++;
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
            if(nums[i]-k == 0) {
                count++;
            }
            if(mp.find(nums[i]-k)!= mp.end()){
                count+= mp[nums[i]-k];
            }
            mp[nums[i]]++;
        }
        return count;
    }
};
