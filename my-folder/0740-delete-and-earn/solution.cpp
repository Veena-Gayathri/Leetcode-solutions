class Solution {
public:
    // int deleteAndEarn(vector<int>& nums) {
    //     map <int,int> mp;
    //     int sum=0,plus=0;
    //     for(auto it:nums) mp[it]++;
    //     for(auto i=mp.begin();i!=mp.end();i++){
    //         for(auto it=i;it!=mp.end();it++){
    //             plus+=it->first*it->second;
    //             it->second=0;
    //             if(mp.find(it->first+1)!=mp.end()) {
    //             sum+=(it->first+1)*(mp.find(it->first+1)->second);
    //             mp.find(it->first+1)->second=0;
    //             }
    //             if(mp.find(it->first-1)!=mp.end()){
    //                 sum+=(it->first-1)*(mp.find(it->first-1)->second);
    //                 mp.find(it->first+1)->second=0;
    //             }
    //         }
    //         sum=max(sum,plus);
    //     }
    //     return sum;
    // }


    int deleteAndEarn(vector<int>& nums) {
        int n = 10001;
        vector<int> values(n, 0);
        for (int num : nums)
            values[num] += num;

        int take = 0, skip = 0;
        for (int i = 0; i < n; i++) {
            int takei = skip + values[i];
            int skipi = max(skip, take);
            take = takei;
            skip = skipi;
        }
        return max(take, skip);
    }
};
