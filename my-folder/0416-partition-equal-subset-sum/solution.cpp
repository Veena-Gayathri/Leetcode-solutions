class Solution {
public:
    bool subset_sum(vector<int> &v,int sum){
        int n=v.size();
        vector <vector<int>> t(n+1,vector<int>(sum+1,0));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(j==0) t[i][j]=true;
                else if(i==0) t[i][j]= false;
                else if(v[i-1]<=j) t[i][j]=t[i-1][j-v[i-1]]||t[i-1][j];
                else t[i][j]=t[i-1][j];
            }
        }
        return t[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto it:nums) sum+=it;
        if(sum%2!=0) return false;
        else return subset_sum(nums,sum/2);
    }
};
