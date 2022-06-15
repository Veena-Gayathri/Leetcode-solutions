class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> out;
        string res;
        out.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(out.empty()) out.push(s[i]);
            else {
                if(out.top()==s[i]) out.pop();
                else out.push(s[i]);
            }
        }
        while(!out.empty()){
            res+=out.top();
            out.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
