class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int cache=0;
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++){
            cache=nums[i]-nums[i-1];
            if(cache> 1) return nums[i]-1;
        }
        if(nums[0]!=0) return 0;
        return nums.size();
    }
};
