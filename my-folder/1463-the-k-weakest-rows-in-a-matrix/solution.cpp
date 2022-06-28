class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue <pair<int,int>> maxh;
        int m=mat[0].size(), n=mat.size();
        unordered_map <int,int> mp;
        vector <int> v;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mp[i]+=mat[i][j];
            }
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            maxh.push({i->second,i-> first});
            if(maxh.size()>k) maxh.pop();
        }
        while(!maxh.empty()){
            v.push_back(maxh.top().second);
            maxh.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
