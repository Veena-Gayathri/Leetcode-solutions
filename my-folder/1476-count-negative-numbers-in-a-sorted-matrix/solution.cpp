class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int m=grid[0].size();
        for(int i=0 ; i<grid.size() ; i++){
            count += upper_bound(grid[i].rbegin() , grid[i].rend() , -1) - grid[i].rbegin();
        }
        return count;
    }
};

//   int n= grid.size();
//         int m=grid[0].size();
//         int count=0;
//         for(int i=n-1;i>=0;i--){
//             for(int j=m-1;j>=0;j--){
//                 if(grid[i][j]<0){
//                     count++;
//                 }
//                 else continue;
//             }
//         }
//         return count;
