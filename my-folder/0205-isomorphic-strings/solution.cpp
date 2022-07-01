class Solution {
public:
    string normalize_pattern(string word) {
        unordered_map<char, char> m;
        char curr = 'a';
        
        for (auto letter : word)
            if (!m[letter]) m[letter] = curr++;
        
        for (int i = 0; i < word.size(); i++) word[i] = m[word[i]];
        
        return word;
        
    }
    
    bool isIsomorphic(string s, string t) {
        return normalize_pattern(s) == normalize_pattern(t);
    }
   /* bool isIsomorphic(string s, string t) {
        vector <int> v1;
        vector <int> v2;
        int l=0;
        if(s==t) return true;
        unordered_map <char,int> mp;
        for(char c:s) {mp[c]++; v1.push_back(mp[c]);}
        mp.clear();
        for(int i=0;i<t.length();i++){
            if(t[i]!=s[i])  mp[t[i]]++;  if(mp[t[i]]==v1[i]) l++;
        }
        if(l==s.length()) return true;
        return false;
        if(s==t) return true;
        return giveString(s,t);
    }
    bool giveString(string s,string t){
        unordered_map <char,int> mp;
        string str1,str2;
        for(char c:s) mp[c]++; 
        for(char c:s) str1+=(char(97+ mp[c]));
        mp.clear();
        for(char c:t) mp[c]++;
        for(char c:t) str2+=(char (97+ mp[c]));
        cout<<str1<<endl<<str2<<endl;
        if(str1==str2) return true;
        return false;
    }*/
};









/* bool helper(string s,string t){
    map<char,char>mp;
    for(int i=0;i<s.size();i++){
        if(mp.find(s[i])!=mp.end()){
            if(mp[s[i]]!=t[i]) return false;
        }
        else  mp[s[i]]=t[i];
    }
    return true;
}

bool isIsomorphic(string s, string t) {
    return helper(s,t) && helper(t,s);
}
*/
