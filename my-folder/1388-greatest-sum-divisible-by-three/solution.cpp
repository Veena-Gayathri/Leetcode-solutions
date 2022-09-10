class Solution {
public:
      int maxSumDivThree(vector<int>& A) {
        vector<int> dp(3);
        for (int a : A)
            for (int i : vector<int>(dp))
                dp[(i + a) % 3] = max(dp[(i + a) % 3], i + a);
        return dp[0];
    }
//     void Knapsack(vector <int> &v,int sum,int n,vector <int>&t){
//         // for(int i=0;i<=n;i++) {for(int j=0;j<=sum;j++){
//         //     if(j==0) t[i][j]= true;
//         //     else if(i==0) t[i][j]= false;
//         //     else if(v[i-1]<=j) t[i][j]=t[i-1][j-v[i-1]]||t[i-1][j];
//         //     else t[i][j]=t[i-1][j];
//         //     cout<<t[i][j]<<" ";
//         // }cout<<endl;}
        
//         for(int i=1;i<=n;i++){ 
//             vector<int> temp(sum+1,0); temp[0]=1;
//             for(int j=1;j<=sum;j++){
//                 if(v[i-1]<=j)temp[j]=t[j-v[i-1]]||t[j];
//                 else temp[j]=t[j];
//             }
//             t=temp;
//         }
//     }
//     int maxSumDivThree(vector<int>& nums) {
//         int sum =0,n=nums.size();
//         vector<int> ans;
//         int sum1=0,sum2=0;
//         for(auto it:nums){
//             if(it%3==0){
//                 sum1+=it;
//             }else{
//                 ans.push_back(it);
//                 sum2+=it;
//             }
//         }
//         sum2-=sum2%3;
//         vector <int> t(sum2+1,0);
//         t[0]=1;
//         Knapsack(ans,sum2,ans.size(),t);
//         cout<<"hello"<<endl;
//         while(sum2>0){ 
//             if(t[sum2]) return sum2+sum1;
//             else sum2-=3;
//         }
//         return 0;
//     }
};

