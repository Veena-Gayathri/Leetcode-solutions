class Solution {
public:

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int first=cost[0],second=cost[1];
        for(int i=2;i<n;i++){
            int temp=cost[i]+min(first,second);
            first=second; second=temp;
        }
        return min(first,second);
    }
};
/*
    int t[1002]; 
    int minCost(vector <int>& cost, int n){
        if (n < 0) return 0;
        if (n==0 || n==1) return cost[n];
        if(t[n]!= 0) return t[n];
        return t[n]= cost[n] + min(minCost(cost, n-1), minCost(cost, n-2));
    }
*/

