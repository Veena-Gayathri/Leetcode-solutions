class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
		int n = A.size();
		if(n <= 2) return 0;
		int dp=0;
		
		int res = 0;
		for(int i=2; i<n; ++i){
			if(A[i]-A[i-1] == A[i-1]-A[i-2])
				++dp;
			else
				dp=0;
			res += dp;
		}
		
		return res;
	}
   /* int t[5001][5001];
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3)return 0;
        memset(t,-1,sizeof(t));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<1 or j<1) t[i][j]=-1;
                if(i==1 or j==1) {t[i][j]=0;
                    //if(nums[i-1]-nums[i] == nums[i]- nums[i+1] or
                     //  nums[j-1]-nums[j]== nums[j]-nums[j+1]) t[i][j]=0;
                    //else t[i][j]=-1;
                }
            }
        }
        for(int i=2;i<=n-1;i++){
            for(int j=2;j<=n-1;j++){
                if(nums[j-1]-nums[j]==nums[j-2]- nums[j-1]) 
                    t[i][j]=t[i-1][j]+1;
                //else if(nums[i-1]-nums[i]==nums[i-2]- nums[i-1])
                    //t[i][j]=t[i][j-1]+1;
                else t[i][j]=t[i-1][j-1];
            }
        }
        return t[n-1][n-1];
    }*/
};
