class Solution {
public:
    int numSquares(int n) {
        //vector for updating the dp array/values
        vector<int> dp(n+1,INT_MAX);
        //base case
        dp[0]=0;
        int count = 1;
        while(count*count <= n) {
        int sq = count*count;
        for(int i = sq; i < n+1; i++) {
            dp[i] = min(dp[i-sq] + 1,dp[i]);
        }
        count++;
    }
    return dp[n];
    }
 /*   vector<int> generate_PS(int n){
        vector<int> v;
        for(int i=1;i<=n;i++){
            if(i*i<=n) v.push_back(i*i);
            else break;
        }
        return v;
    }
    int subset_sum(vector<int> &v,int sum){
        int n=v.size();
        vector <vector<int>> t(n+1,vector<int>(sum+1,0));
        int mn=sum;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(j==0) {t[i][j]=0; }
                else if(i==0) t[i][j]= 0;
                else if(i==1) t[i][j]=j;
                else if(v[i-1]<=j){ 
                        t[i][j]=min(1+t[i][j-v[i-1]],t[i-1][j]);
                }
                else t[i][j]=t[i-1][j];
                cout<<t[i][j]<<" ";
            }
            cout<<endl;
        }
        return t[n][sum];
    }
    int numSquares(int n) {
        if(n<4) return n;
        vector <int> v=generate_PS(n);
        return subset_sum(v,n);
    }*/
};
