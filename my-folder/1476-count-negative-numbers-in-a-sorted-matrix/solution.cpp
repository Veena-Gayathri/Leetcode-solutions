class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        if(grid.empty())
            return 0;
        const int M = grid.size(), N = grid[0].size();
        int row = M-1, col = 0;
        int neg_count = 0;
        
        while(row >= 0 && col < N) {
            if(grid[row][col] < 0) {
                neg_count += N - col;
                --row;
            }
            else
                ++col;
        }
        return neg_count;
    }
};
    
    
    
    
    
    
    /*while(i>=0 && i<p.second && j>=0 && j< p.first){
            if(grid[i][j]<0){
                no++; int t=i,u=j;
                while(grid[t-1][j]<0 && t>=0){
                    t--;no++;
                }
                while(grid[i][u-1]<0 && u>=0){
                    u--; no++;
                }
                i--;j--;
            }
            else return no;
        }
        return no;
    }*/
