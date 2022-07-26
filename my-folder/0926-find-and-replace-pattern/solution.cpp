class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        unordered_map <char,pair<int,char>> mp;
        vector <string> op;
        char init= 'a'; string a,res;
        for(char c:pattern){
            if(mp.find(c)!=mp.end()) mp[c].first++;
            else mp[c].second= init++;
            res+=mp[c].second;
        }
        mp.clear();
        init='a';
        for(string s : words){
            for(char c:s){
                if(mp.find(c)!=mp.end()) mp[c].first++;
                else mp[c].second= init++;
                a+=mp[c].second;
            }
            cout<<a<<endl;
            if(a==res) op.push_back(s);
            mp.clear(); init='a';a="";
        }
        return op;
    }
};
