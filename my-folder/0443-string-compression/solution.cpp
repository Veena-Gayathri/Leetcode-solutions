class Solution {
public:
    int compress(vector<char>& chars) {
        string s="";
        int countu=1;
        if(chars.size()==0 ) return 0;
        if(chars.size()==1) return 1;
        for(int i=1; i<chars.size();i++){
            if(chars[i]==chars[i-1]){
                countu++;
            }
            else {
                s+=chars[i-1];
                if(countu!=1) s.append(to_string(countu));
                countu=1;
            }
        }
        s+=chars[chars.size()-1];
        if(countu!=1) s.append(to_string(countu));
        chars.clear();
        for(auto it: s){
            chars.push_back(it);
        }
    return chars.size();
    }
};
