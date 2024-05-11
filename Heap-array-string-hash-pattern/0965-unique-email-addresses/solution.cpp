class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map <string, int> email;
        string s="",dom="";
        for(int i=0;i<emails.size();i++){
            string str= emails[i];
            dom=str.substr(str.find('@'),str.length()-str.find('@'));
            for(int j=0;j<str.length();j++){
                if(str[j]=='.') continue;
                else if(str[j]=='+') break;
                else if(str[j]=='@') break;
                else s+=str[j];
            }
            cout<<s<<endl;
            email[s+dom] ++;
            s="";
        }

        return email.size();
    }
};
