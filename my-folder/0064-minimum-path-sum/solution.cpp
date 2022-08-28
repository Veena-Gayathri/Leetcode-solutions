class Solution {
public:
    int minPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m= matrix[0].size();
        for(int i=1;i<m;i++) matrix[0][i]+=matrix[0][i-1];
        for(int i=1;i<n;i++) matrix[i][0]+=matrix[i-1][0];
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                matrix[i][j]+=min(matrix[i-1][j],matrix[i][j-1]);
            }
        }
        return matrix[n-1][m-1];
    }
};
