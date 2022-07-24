class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,N=s.size(),ans=0,cnt[128]={};
        for(;j<N;++j){
            cnt[s[j]]++;
            while(cnt[s[j]]>1) cnt[s[i++]]--;
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};

        /*int mx=0,count=0,i=0,j=0,n=s.length();
        unordered_map <char,int> mp;
        while(j<=n){
            if(mp.find(s[j])==mp.end()){mp[s[j]]++; count++;j++;}
            else{ mx=max(count,mx);count =0; mp.clear();i=j;}
        }
        return mx;
        */

        /*unordered_set<char> set;
		int i = 0, j = 0, n = s.size(), ans = 0;
		while(j<n){
			if(set.find(s[j]) == set.end()){
				set.insert(s[j++]); 
				ans = max(ans, j-i);
			}
			else{
				set.erase(s[i++]); 
			}
		}
		return ans;*/

/*
        int mx=0,count=0;
        unordered_map <char,int> mp;
        for(char c:s){
            if(mp.find(c)==mp.end()) {mp[c]++; count++;} 
            else {mx=max(count,mx); count=0; mp.clear();}
        }
        return mx;
        */
