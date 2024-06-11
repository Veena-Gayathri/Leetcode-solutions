class Solution {
public:
    int minAddToMakeValid(string s) {
        stack <char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') st.push('(');
            else if(s[i]==')'){
                if (!st.empty() and st.top()=='('){
                    st.pop();
                }
                else{
                    st.push(')');
                }
            }
        }
        int count =0;
        while(!st.empty()){
            count++;
            st.pop();
        }
        return count;
    }
};
