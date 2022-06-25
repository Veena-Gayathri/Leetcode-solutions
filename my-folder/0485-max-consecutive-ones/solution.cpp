class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
/*        int n=nums.size();
        unordered_map <int,int> mp;
        int it=0,sum=0;
        for(int i=0; i<n;i++){
            if(nums[i]==0) it=i;
            else mp[it+1]++;
        }
        for(int i=n;i>=0;i--) if(mp.find(i)!=mp.end()) return i;
        return 0;
    }*/
        int max_cnt = 0, cnt = 0;
        for (auto n : nums) {
            if (n == 1) max_cnt = max(++cnt, max_cnt);
            else cnt = 0;
        }
        return max_cnt;
    }
};
