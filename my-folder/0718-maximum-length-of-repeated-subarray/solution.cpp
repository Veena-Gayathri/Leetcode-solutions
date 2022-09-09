class Solution {
public:
    // int findLength(vector<int>& nums1, vector<int>& nums2) {
    //     int n = nums1.size(), m = nums2.size();
    //     int dp[n+1][m+1];
    //     for(int i = 0 ; i <= n ; i++) dp[i][0] = 0;
    //     for(int j = 0 ; j <= m ; j++) dp[0][j] = 0;
    //     int ans = 0;
    //     for(int i = 1 ; i <= n ; i++){
    //         for(int j = 1 ; j <= m ; j++){
    //             if(nums1[i-1]==nums2[j-1])
    //                 dp[i][j] = dp[i-1][j-1]+1;
    //             else
    //                 dp[i][j] = 0;
    //             ans = max(ans, dp[i][j]);
    //         }
    //     }
    //     return ans;
    // }
    
        int dp[1001][1001];
    
    int recurs(vector<int>& nums1, vector<int>& nums2,int i,int j)
    {
        
        if(i<0||j<0)
        {
            return 0;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
       
        recurs(nums1,nums2,i-1,j);
        recurs(nums1,nums2,i,j-1);
            
            if(nums1[i]==nums2[j])
            {
                return dp[i][j]=recurs(nums1,nums2,i-1,j-1)+1;
            }
        
           else
            {
            return dp[i][j]=0;
            }
    }
    
    
    
    
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        
        for(int i=0;i<=nums1.size();i++)
        {
             for(int j=0;j<=nums2.size();j++)
            {
                dp[i][j]=-1;
            }
            
        }
        
         recurs(nums1,nums2,nums1.size()-1,nums2.size()-1);
        int max1=0;
        
         for(int i=0;i<=nums1.size();i++)
        {
             for(int j=0;j<=nums2.size();j++)
            {
                max1=max(max1,dp[i][j]);
            }
            
        }
        
        return max1;
    }
    
    // int dp[1001][1001];
    // int Solve(vector<int>& A, vector<int>& B, int i, int j){
    //     if(i<0 or j<0) return 0;
    //     if(i==0 or j==0) {if(A[i]!=B[j]) return 0; else return 1;}
    //     //int count=0;
    //     int I=0;
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     I=Solve(A,B,i-1,j);
    //     int J=0;
    //     J=Solve(A,B,i,j-1);
    //     int P=0;
    //     P=Solve(A,B,i-1,j-1);
    //     if(A[i]==B[j] and A[i-1]==B[j-1]) { return dp[i][j] = 1+P;}
    //     else{ return dp[i][j]=max(I,J);}
    // }
    // int findLength(vector<int>& nums1, vector<int>& nums2) {
    //     memset(dp,-1,sizeof(dp));
    //     int n=nums1.size(),m=nums2.size();
    //     return Solve(nums1,nums2,n-1,m-1);
    // }
};
