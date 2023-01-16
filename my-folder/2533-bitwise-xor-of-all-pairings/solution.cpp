class Solution {
public:
    // vector<int> xorVec(vector<int>& nums1, vector<int>& nums2){
    //     vector<int> v;
    //     for(auto i: nums1){
    //         for(auto j:nums2){
    //             v.push_back(i ^ j);
    //         }
    //     }
    //     return v;
    // }
    // int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
    //     vector <int> v;
    //     int n;
    //     v=xorVec(nums1,nums2); n=v[0];
    //     int k=v.size();
    //     for(int i=1;i<k;i++){
    //         n=n ^ v[i];
    //     }
    //     return n;
    // }
    int xor_calc(vector<int> nums){
        int ans = 0;
        for(auto x: nums){
            ans ^= x;
        }
        return ans;
    }
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        if(n1 % 2 == 0 && n2 % 2 == 0) return 0;
        int xor1 = xor_calc(nums1);
        int xor2 = xor_calc(nums2);
        return (n1 % 2 & n2 % 2) ? xor1 ^ xor2 : (n1 % 2 ? xor2 : xor1);
    }
};
