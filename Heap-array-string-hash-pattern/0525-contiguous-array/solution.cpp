class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size(), res=0, sum=0;
        unordered_map <int,int> mp;

        for(int i=0;i<n;i++){
            nums[i]= (nums[i]==1)? 1: -1;
            sum+=nums[i];
            if(sum==0){
                res = max(res,i+1);
            }
            else if(mp.find(sum)!= mp.end()) {
                res= max(i-mp[sum], res);
            }
            else {
                mp[sum] = i;
            }
        }
        return res;
    }
};
      
