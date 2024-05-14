/* My solution:
        int diff =0,profit=0, total=0, i=1 , ele = prices[0], n= prices.size();
        while(i< n){
            
            diff = prices[i]-ele;
            if(diff<profit){
                total+=profit;
                profit =0; 
                ele = prices[i]; 
                i++;
            }
            else if(diff>=profit){
                profit= diff; i++;
            }

        }
        total +=profit;
        return total;
*/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = prices[0];
        int days = prices.size();
        for(int i = 1; i < days; i++) {
            if(buy < prices[i]) 
                profit += prices[i] - buy;
            buy = prices[i];
        }
        return profit;
    }
};
