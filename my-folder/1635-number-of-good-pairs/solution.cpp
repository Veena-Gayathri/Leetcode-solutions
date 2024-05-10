class Solution {
public:

    int numIdenticalPairs(vector<int>& nums) {
        unordered_map <int, int> mp;
        int sum = 0;
        for(auto it: nums){
            mp[it]++;
            if(mp[it]> 1){
                sum+= mp[it]-1;
            }
        }
        return sum;
    }
};
