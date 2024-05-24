class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0, ans=0;
        for(auto it:nums){
            if(it==1){
                maxi++;
                ans=max(maxi,ans);
            }
            else{
                maxi=0;
            }
        }
        return ans;
    }
};
