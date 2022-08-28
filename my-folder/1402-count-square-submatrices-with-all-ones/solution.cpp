class Solution {
public:

    int countSquares(vector<vector<int>>& matrix) {
        vector<vector<int>> temp= matrix;
        int n=matrix.size(),m=matrix[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0||j==0){
                    count+=temp[i][j];
                    continue;
                }else if(temp[i][j]<1){
                    continue;
                }else{
                    temp[i][j]=min(temp[i-1][j-1],min(temp[i-1][j],temp[i][j-1]))+1;
                    count+=temp[i][j];
                }            
            }
        }
        return count;
    }
};


   /* int checkOnes(vector<vector<int> temp){
        for(auto it:temp){
            for(auto i:it) if(i==0) return 0;
        }
        return 1;
    }
    int countforSquare(vector<vector<int>> &matrix){
        vector<vector<int>> temp1= matrix;
        vector<vector<int>> temp2;
        vector<vector<int>> temp0;
        int n=matrix.size(), m=matrix[0].size();
        int size=min(m-1,n-1);
        int window=1,i=0,j=0;
        while(window<=size){
            temp0=temp1
            temp1[i][j]= checkOnes()
        }
    }*/
