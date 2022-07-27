class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
	vector<int> goal(26), cur(26), res;
	for(char c : p) goal[c - 'a']++;
	for(int i = 0; i < s.size(); i++) {
		cur[s[i] - 'a']++;
		if(i >= p.size()) cur[s[i - p.size()] - 'a']--;
		if(cur == goal) res.push_back(i - p.size() + 1);
	}
	return res;
    }
};
    
    /*
    
        map <char,int> str0;
        map <char,int> str;
        vector <int> op; 
        int n=s.length(),m=p.length();
        for(char c:p){
            str0[c]++;
        }
        int i=0;
        while(i+m<n){
            str[s[i++]]++;
            if(str==str0) {op.push_back(i-1); str.clear();}
        }
        return op;
    }
    */
