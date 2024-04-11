class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> v;
        int pt2=nums.size()-k,n=0;
        if(pt2<0){
            n = k/nums.size();
            for(int i =0;i<=n+1;i++){
                for(auto it: nums){
                    v.push_back(it);
                }
            }
            vector <int> p;
            for (int i = v.size()-k;i<v.size()-k+nums.size();i++){
                p.push_back(v[i]);
            }
            nums=p;
        }
        else{
            for (int i =nums.size()-k;i<nums.size();i++){
                v.push_back(nums[i]);
            }
            for(int i =0;i<nums.size()-k;i++){
                v.push_back(nums[i]);
            }
            nums = v;
        }
    }
};
