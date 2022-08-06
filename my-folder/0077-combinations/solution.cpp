class Solution {
public:
    void answer(int k,int start,int end,vector<vector<int>> &combination,vector<int> &p,int size){
        if(start==end+1) {if(size==k) { combination.push_back(p); } return;}
        p.push_back(start); 
        answer(k,start+1,end,combination,p,size+1);
        p.pop_back(); 
        answer(k,start+1,end,combination,p,size);
    }
    vector<vector<int>> combine(int n, int k) {
        int start=1,end=n,size=0;
        vector<int> p;
        vector <vector<int>> combination;
        answer(k,start,end,combination,p,size);
        return combination;
    }
};
