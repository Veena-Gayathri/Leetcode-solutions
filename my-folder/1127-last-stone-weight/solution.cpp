class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        int n=stones.size();
        while(stones.begin()!=stones.end()-1){
            if(*(stones.end()-1)==*(stones.end()-2)) {stones.pop_back(); 
                                        stones.pop_back(); stones.push_back(0);}
            else {
                int t= abs(*(stones.end()-1)-*(stones.end()-2));
                stones.pop_back();  stones.pop_back();
                stones.push_back(t);
            }
            sort(stones.begin(),stones.end());
        }
        return *stones.begin();
    }
};
