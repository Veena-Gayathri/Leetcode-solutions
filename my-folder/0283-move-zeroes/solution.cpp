class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int t=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                // cout<<nums[i]<<endl;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        for(int i=nums.size()-1; i< t-1; i++){
            nums.push_back(0);
            // for(auto it:nums){
            //     cout<<it;
            // }
        }
    }
};
