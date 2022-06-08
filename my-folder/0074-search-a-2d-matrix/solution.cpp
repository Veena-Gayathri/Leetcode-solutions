class Solution {
public:
    /*bool searchMatrix(vector<vector<int>>& matrix, int target) {
        pair<int,int> p; 
        p.first=matrix[0].size();//x
        p.second=matrix.size();//y
        int i0=0, j1=p.first-1;
        int j0=p.second-1, i1=p.second-1;
        while(i0>=0 && j1<p.first && j0>=0 && i1<p.second){
            int mid1 = i0+(i1-i0)/2;
            int mid2 = j0+(j1-j0)/2;
            if(matrix[mid1][mid2]==target) return true;
            else if(matrix[mid1][mid2]<target) i0=mid1+1;
            else if(matrix[mid1][mid2]>target) j1=mid2-1;
        }return false;
    }*/
    /*bool searchMatrix(vector<vector<int>>& matrix, int target){
        pair<int,int> p; 
        p.first=matrix[0].size();//x
        p.second=matrix.size();//y
        int i=0; int j=p.first-1;
        while(i>=0 && i<p.second && j>=0 && j<p.first){
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]>target) j--;
            else if(matrix[i][j]<target) i++;
        } return false;
    } */ 
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        int rows = matrix.size(),
			cols = matrix[0].size(),
            row = 0, col = cols - 1;
			
        while (row < rows && col > -1) {
            int cur = matrix[row][col];
            if (cur == target) return true;
            if (target > cur) row++;
            else col--;
        }
        
        return false;
    }

};
