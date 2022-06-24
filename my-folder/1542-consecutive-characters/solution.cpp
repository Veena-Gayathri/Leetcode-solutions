class Solution {
public:
    int maxPower(string s) {
        int power=1,max=1;
        char prev;
 //       unordered_map <char,int> m;
        for(char it:s){
            if(it==prev) max++;
            else max=1;//m[it]++;
            prev=it; if(max>power) power=max; 
        }
    //    power= *max_element(m.begin(),m.end());
        return power;
    }
};
