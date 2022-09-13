class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int ans = 1, n = size(nums);
        vector<int> dp(n, 1);
        for(int i = 0; i < n; i++) 
            for(int j = 0; j < i; j++) 
                if(nums[i] > nums[j]) 
				    dp[i] = max(dp[i], dp[j] + 1), ans = max(ans, dp[i]);
        return ans;
    }
    // int lengthOfLIS(vector<int>& nums) {
    //     int n=nums.size();
    //     vector <int> v(n,0);
    //     int last = 0;
    //     for(int i=1;i<n;i++){
    //         //if(nums[i]<nums[i-1]) last=nums[i];
    //         if(nums[i]>nums[last]){ v[i]=v[last]+1; last= i;  }
    //         else{int j=last;
    //             while(nums[i]<=nums[j] and j>0){
    //                 j--; 
    //             }
    //             v[i]=v[j]+1;
    //         }
    //     }
    //     int mx=*max_element(v.begin(),v.end());
    //     return mx;
    // }
};



