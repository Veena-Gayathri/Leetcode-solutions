class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.length(),i=0,op=0,res=0;
        unordered_map <char,int> mp;
        mp['a']=1; mp['e']=1; mp['i']=1;mp['o']=1;mp['u']=1;
        string str=s.substr(0,k);
        for(int j=0;j<k;j++){
                op+=mp[str[j]];
            }
        while(i+k<=n){
            res=max(op,res);
            op-=mp[s[i]]; op+=mp[s[i+k]];
            i++; 
        }
        return res;
    }

};
