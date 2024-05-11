class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // Better solution can be done in O(N) complexity

        int pt1=0, pt2=nums.size()-1;
        while(nums[pt1]<0 and pt1 <= pt2 ){
            if(nums[pt1]* nums[pt1]>= nums[pt2] * nums[pt2]) {
                nums.insert(nums.begin()+ pt2+1, -1* nums[pt1]);
                pt1++;
                pt2;
            }
            else{
                pt2--;
            }
        }
        int i=0;
        while(nums[i]<0 and nums.size()>1){
            nums.erase(nums.begin()+ i);
        }
        for(int i=0; i<nums.size(); i++){
            nums[i]= nums[i]* nums[i];
        }
        return nums;
    }
};

        // priority_queue <int, vector<int>, greater<int>> min_heap;
        // for(auto it: nums){
        //     min_heap.push(it*it);
        // }
        // int i=0;
        // while(!min_heap.empty()){
        //     nums[i++] = min_heap.top();
        //     min_heap.pop();
        // }
        // return nums;







