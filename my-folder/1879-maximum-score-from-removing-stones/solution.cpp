class Solution {
public:
    int maximumScore(int a, int b, int c) {
        vector <int> v;
        v.push_back(a); v.push_back(b); v.push_back(c);
        sort(v.begin(),v.end());
        int score=0;
        while(v[0]>0 or v[1]>0){
            if(v[0]==0) {v[1]--; v[2]--; score++;}
            else {v[0]--; v[2]--;score++;}
            sort(v.begin(),v.end());
        }
        return score;
    }
};
