class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> st;
        for(auto it: s){
            if(st.empty() or st.top()!=it) st.push(it);
            else st.pop();
        }
        string str="";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
