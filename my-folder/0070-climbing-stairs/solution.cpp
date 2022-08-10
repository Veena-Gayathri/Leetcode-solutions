class Solution {
public:

    //int t[47];
    int climbStairs(int n) {
        if(n==0) return 1;
        if(n==1) return 1;
        if(n<0) return 0;
        //if(t[n]!=0) return t[n];
        //return t[n]=climbStairs(n-2)+climbStairs(n-1);
        int first=1,second=1;
        int temp=first+second;
        for(int i=2;i<=n;i++){
            temp =first+second;
            first=second;
            second=temp;
        }
        return temp;
    }
};
