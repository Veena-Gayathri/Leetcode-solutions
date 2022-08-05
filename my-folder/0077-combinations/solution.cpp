class Solution {
public:
    void generate(int ind,vector<int>& otp,vector<int> &nums, int n,int k,vector<vector<int>> &op, int size){
        if(ind==n){
            if(size==k){ 
                op.push_back(otp);
            }
            return;
        }
        otp.push_back(nums[ind]);
        generate(ind+1,otp,nums,n,k,op,size+1);
        otp.pop_back();
        generate(ind+1,otp,nums,n,k,op,size);
        return;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        vector <int> otp;
        int ind;
        int size;
        for(int i=1;i<=n;i++) nums.push_back(i);
        vector<vector<int>> op;
        generate(0,otp,nums,n,k,op,0);
        return op;
    }
};
