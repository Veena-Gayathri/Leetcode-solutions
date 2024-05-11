class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector <int> ans = nums;
        vector <int> sol;
        sort(nums.begin(),nums.end());
        unordered_map <int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()) mp[nums[i]] = i;
            else continue;
        }
        for(auto it: ans){
            sol.push_back(mp[it]);
        }
        return sol;
    }
};
