class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m= matrix[0].size();
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0)matrix[i][j]+=min(matrix[i-1][j],matrix[i-1][j+1]);
                else if(j==m-1) matrix[i][j]+=min(matrix[i-1][j],matrix[i-1][j-1]);
                else matrix[i][j]+=min(matrix[i-1][j],min(matrix[i-1][j-1],matrix[i-1][j+1]));
            }
        }
        int mn=INT_MAX;
        for(auto it: matrix[n-1]){
            mn=min(mn,it);
        }
        return mn;
        }
};
