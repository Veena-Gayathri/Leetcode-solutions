class Solution {
public:
   /* int findNumbers(vector<int>& nums) {
        vector <string> str;
        int count=0;
        for(int i:nums) str.push_back(to_string(i));
        for(string s:str)
            if(s.length()%2==0) count++;
        return count;
    }*/
    int findNumbers(vector<int>& nums) {
        int res=0;
        for(auto num:nums) {
            res+=(int)log10(num)&1;
        }
        return res;
    }
};
