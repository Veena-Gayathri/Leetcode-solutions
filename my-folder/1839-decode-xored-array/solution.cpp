class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector <int> v;
        v.push_back(first);
        int prev=first;
        for(int i=0;i<encoded.size();i++){
            int curr=prev^encoded[i];
            prev=curr;
            v.push_back(curr);
        }
        return v;
    }
};
