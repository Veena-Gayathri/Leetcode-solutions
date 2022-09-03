class Solution {
public:
    int integerBreak(int n) {
        int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for(int j=2;j<n+1;j++){
            int maxi=0;
            for(int i=1;i<j;i++){
                maxi=max(maxi,max(dp[j-i]*i,i*(j-i)));
            }
            dp[j]=maxi;
        }
        return dp[n];
    }
    /*int integerBreak(int n) {
        int t[n][n+1];
        memset(t,1,sizeof(t));
        for(int i=1;i<n-1;i++){
            for(int j=1;j<i;j++){
                if(i==1) {t[i][j]=1; continue;}
                if(j==1) {t[i][j]=1; continue;}
                int temp; 
                if(i>2){ 
                    if( i-1<n-1 && j%(i-1)==1 )
                        temp= pow(i-1,j%(i-1)-1)*pow(i-2,2);
                    else temp=pow(i-1,j%(i-1))*(j%(i-1));
                }
                else temp=1;
                t[i][j]=max(t[i-1][j],temp);
            }
        }
        return t[n-1][n];
    }*/
};
