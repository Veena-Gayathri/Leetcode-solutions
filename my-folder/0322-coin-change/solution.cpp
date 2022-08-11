class Solution {
public:
    /*int findMin(vector <int> &coins,int n,int k,vector<vector<int>>& t){
        if(k==0) return 0;
        if(n<0 or k<0) return INT_MAX-1;
        if(t[n][k]!= -1) return t[n][k]; 
        t[n][k]= min(1+findMin(coins,n,k-coins[n],t),findMin(coins,n-1,k,t));
        return t[n][k];
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>t(coins.size()+1,vector<int>(amount+1,-1));
        int ans= findMin(coins,n-1, amount,t);
        if(ans<INT_MAX-1) return ans;
        else return -1;
    }*/
    int coinChange(vector<int>& coins, int amount) {
        vector <int> h((amount+1),INT_MAX -1);
        h[0]=0;
        sort(coins.begin(),coins.end());
        for(int i=0;i<h.size();i++){
            for(int j=0;j<coins.size();j++){
                if(i>=coins[j]) h[i]= min(h[i],1+h[i-coins[j]]);
            }
        }
        return (h[h.size()-1]<INT_MAX-1)? h[h.size()-1]:-1;
    }
   /* int coinChange(vector<int>& coins, int n) {
        // creating the base dp array, with first value set to 0
        int dp[++n];
        dp[0] = 0;
        // more convenient to have the coins sorted
        sort(begin(coins), end(coins));
        // populating our dp array
        for (int i = 1; i < n; i++) {
            // setting dp[0] base value to 1, 0 for all the rest
            dp[i] = INT_MAX;
            for (int c: coins) {
                if (i - c < 0) break;
                // if it was a previously not reached cell, we do not add use it
                if (dp[i - c] != INT_MAX) dp[i] = min(dp[i], 1 + dp[i - c]);
            }
        }
        return dp[--n] == INT_MAX ? -1 : dp[n];
    }*/
};
