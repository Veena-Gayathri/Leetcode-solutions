class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=*max_element(candies.begin(),candies.end());
        vector <bool> v;
        for(auto it: candies){
            if(it+extraCandies>=n) v.push_back(true);
            else v.push_back(false);
        }
        return v;
    }
};
