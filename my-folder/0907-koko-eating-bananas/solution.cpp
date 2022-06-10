class Solution {
public:
    int CalculateHours(vector<int>& piles, int mid){
        int hrs=0;
        if(mid==0) return INT_MAX;
        for(int i=0;i<piles.size();i++){
            if(piles[i]!=0) hrs++;
            hrs= hrs+ (piles[i]-1)/mid;
        } return hrs;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        //long long sum= accumulate(piles.begin(),piles.end(),0);
        int start=1, end=1000000000;
        while(start<end){
            int mid=start+(end-start)/2;
            int ans= CalculateHours(piles,mid);
            if(ans>h) start=mid+1;
            else {end=mid;}
        } return end;
    }
        /*int minEatingSpeed(vector<int>& piles, int H) {
        int l = 1, r = 1000000000;
        while (l < r) {
            int m = (l + r) / 2, total = 0;
            for (int p : piles)
                total += (p + m - 1) / m;
            if (total > H)
                l = m + 1;
            else
                r = m;
        }
        return l;
    }*/
};
