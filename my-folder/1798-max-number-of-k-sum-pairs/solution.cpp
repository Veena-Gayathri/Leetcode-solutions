class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int no=0;
        int pt2=nums.size()-1, pt1 =0;
        while( pt1< pt2 and pt1<nums.size() and pt2>0 ){
            if(k-nums[pt1]==nums[pt2]){
                no++;
                pt2--;
                pt1++;
            }
            else if(k-nums[pt1]>nums[pt2]){
                pt1++;
            }
            else pt2--;
        }
        return no;
    }
};
