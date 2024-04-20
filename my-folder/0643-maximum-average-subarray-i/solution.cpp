class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n= nums.size();
        if(n-1<k) {
            double sum=0;
            for (auto it: nums){
                sum+=it;
            }
            sum = sum/n;
            return sum;
        }
        double maxi =INT_MIN, avrg= 0;
        int pt1=0, pt2= k-1;
        for( int i = pt1; i<= pt2;i++){
                avrg+=nums[i];
        }
        maxi = avrg/k;
        while(pt2< n){
            avrg += nums[++pt2];
            avrg -= nums[pt1++];
            maxi = max(maxi, avrg/k);
        }
        return maxi;
    }
};
