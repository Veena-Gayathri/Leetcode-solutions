class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) {int k=nums[i]; nums[i]= k*k;}
        sort(nums.begin(),nums.end());
        return nums;
    }
};
