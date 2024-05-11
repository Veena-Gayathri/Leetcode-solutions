class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map <string,string> mp;
        for(auto it:paths){
            mp[it[0]]=it[1];
        }
        for(auto it=mp.begin();it!=mp.end(); it++){
            if(mp.find(it->second)==mp.end()) return it->second;
        }
        return "";
    }
};
