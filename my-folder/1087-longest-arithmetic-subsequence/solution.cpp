class Solution {
public:

            int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size(),res = 2,diff;
        vector<vector<int>>dp(n,vector<int>(1001,0));
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                diff = nums[j]-nums[i]+500;
                dp[j][diff] = max(2,dp[i][diff]+1);
                res = max(res,dp[j][diff]);
            }
        }
        return res;
            }
       /*        
        map<int,int> mp;
        int n = nums.size(), dif, prev, k, res=0;
        vector< vector<int> > dp(n, vector<int>(n,0));
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                dif = nums[j]-nums[i];
                prev = nums[i]-dif;
                if(mp.find(prev) != mp.end())
                {
                    k = mp[prev];
                    dp[i][j] = dp[k][i]+1;
                }
                else
                    dp[i][j] = 2;
                res = max(res, dp[i][j]);
            }
            mp[nums[i]] = i;
        }
        
        return res; 
    }*/

};


/*         int n= nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                mp[nums[i]-nums[j]]++;
            }
        }
        int mx=-1;
        for(auto it:mp) mx=max(mx,it.second+1);
        return mx;
        
        */
