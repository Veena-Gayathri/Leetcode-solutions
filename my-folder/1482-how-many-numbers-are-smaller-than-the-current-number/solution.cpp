class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector <int> v=nums;
        unordered_map <int,int> m;
        sort(v.begin(),v.end());
        m[v[0]]=0;
        for(int i=1;i<v.size();i++){
            if(v[i]!=v[i-1]) m[v[i]]= i;
        }
        for(int i=0;i<v.size();i++){
            v[i]=m[nums[i]];
        }
        return v;
    }
};
