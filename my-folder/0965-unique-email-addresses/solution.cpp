class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set <string> s;
        for(string &str:emails){
            string res="";
            for(char it:str){
                if(it=='.') continue;
                if(it=='+' or it=='@') break;
                res+=it;
            }
            res+=str.substr(str.find('@'));
            s.insert(res);
        }
        return s.size();
    }
};
