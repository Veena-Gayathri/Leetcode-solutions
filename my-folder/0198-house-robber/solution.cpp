class Solution {
public:
    int t[103];
    int fn(vector <int> & nums,int n){
        if(n<0) return 0;
        if(n==0 or n==1) return nums[n];
        if(t[n]!=-1) return t[n];
        return t[n]=nums[n]+ max(fn(nums,n-2),fn(nums,n-3));
    }
    int rob(vector<int>& nums) {
        memset(t, -1, sizeof(t));
        int n=nums.size();
        return max(fn(nums,n-1),fn(nums,n-2));
    }
};
