class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int test=0,count=0;
        for(int i =0;i<nums.size();i++){
            while(nums[i] >0){
                nums[i]= nums[i]/10;
                cout<<nums[i]<<endl;
                test++;
            }
            if(test%2 ==0) count++;
            test=0;
        }
        return count;
    }
};
