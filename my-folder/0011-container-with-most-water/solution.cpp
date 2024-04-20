class Solution {
public:


    int find_max(vector<int> & height, int pt1, int pt2, int maxi){
        if(pt1>=pt2) return INT_MIN;        
        int area = (pt2 - pt1) * (min(height[pt2], height[pt1]) );
        maxi = max(maxi, area);
        if(height[pt2] > height[pt1]){
            maxi = max(maxi, find_max(height, pt1+1, pt2, maxi));
        }
        else if(height[pt2] <= height[pt1] ){
            maxi = max(maxi, find_max(height, pt1, pt2-1, maxi));
        }
        return maxi;
    }
    int maxArea(vector<int>& height) {
        int pt1= 0;
        int pt2= height.size();
        int maxi = INT_MIN;
        int result = find_max(height, pt1, pt2-1, maxi);
        return result;
    }
};
