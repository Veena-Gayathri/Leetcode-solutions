class Solution {
public:
    string reverseVowels(string s) {
        stack <int> st;
        vector <int> v;
        string p=s;
        for(int i=0; i< s.length(); i++){
            if(s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u' || s[i]=='A' || s[i]== 'E' || s[i]== 'I' || s[i] == 'O' || s[i] == 'U'){
            v.push_back(i);
            st.push(i);    
            }
            
        }
        while(!st.empty()){
            for( int i =0; i< v.size(); i++){
                s[v[i]]= p[st.top()];
                st.pop();
            }
        }
        // string s1=s; 
        // string s2= p;
        // transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
        // transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
        // if(s1==s2) return p;
        return s;
    }
};
