class Solution {
private:
    bool areVectorsEqual(vector<int> a, vector<int> b){
        for(int i=0; i<26; i++){
            if(a[i]!=b[i]) return false;
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;
        vector<int> freqS1(26, 0);
        for(char c: s1) freqS1[c-'a']++;
        
        vector<int> freqS2(26, 0);
        int i=0, j=0;
        
        while(j<s2.size()){
            freqS2[s2[j]-'a']++;
            
            if(j-i+1==s1.size()){
                if(areVectorsEqual(freqS1, freqS2)) return true;
            }
            
            if(j-i+1<s1.size()) j++;
            else{
                freqS2[s2[i]-'a']--;
                i++;
                j++;
            }
        }
        return false;
    }
};
/* 
    */


/*unordered_map <char,int> m1,m2; 
        int n1=s1.length(),n2=s2.length();
        int i=0;
        for(auto it:s1) m1[it]++;
        string str=s2.substr(0,n1);
        for(auto it:str) if(m1[it]) m2[it]++;
        while(i+n1<=n2){
            if(m1==m2) return true;
            if(m2.find(str[i])!=m2.end()) m2[str[i]]--;
            if(m1.find(str[i])!=m1.end()) m2[str[i+n1]]++;
            for(auto it:m2) cout<<it.second<<endl;
            i++;
        }
        return false;
    }*//*
    if(s1.size() > s2.size()) return false;
        vector<int>count1(26,0), count2(26,0);
        
        int i;
        for(i = 0; i < s1.size(); i++) {
            // compute the frequency of each char for the first window
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }
        
        if(count1 == count2) return true;
        
        // search the remaining windows
        int start = 0, end = i;
        while(end < s2.size()){
        //remove char at 'start' index and add char at 'end' index
            --count2[s2[start] - 'a'];
            ++count2[s2[end] - 'a'];
          
            if(count1 == count2) return true;
            end++; start++;
        }
        return false;*/
