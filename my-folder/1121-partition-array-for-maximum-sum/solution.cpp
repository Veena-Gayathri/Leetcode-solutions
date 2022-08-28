class Solution {
public:
    int dp[501];
    int Solve(vector <int> &arr,int k,int n){
        if(n<0) return 0;
        if(dp[n]!=-1) return dp[n];
        if(n==0) return dp[n]=arr[n];
        // cout<<n<<endl;
        int sum=0;
        for(int i=1;i<=min(k,n+1);i++){
            sum=max(sum,Solve(arr,k,n-i)+
                    (*max_element(arr.begin()+n-i+1,arr.begin()+n+1))*i);
        }
        // cout<<n<<","<<sum<<endl;
        return dp[n]=sum;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        memset(dp,-1,sizeof(dp));
        int n=arr.size();
        return Solve(arr,k,n-1);
    }
};
