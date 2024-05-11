class Solution {
public:
    int maxPower(string s) {
        int pt1=0,pt2=1,count=1,maxi=1;
        while(pt2<s.length() and pt1<pt2){
            if(s[pt1]==s[pt2]) {
                count++;
                maxi= max(count,maxi);
            }
            else {
                count=1;
            }
            pt1++; pt2++;
        }
        return maxi;
    }
};
