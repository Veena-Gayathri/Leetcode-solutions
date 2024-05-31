class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int no=0, no_ticket= tickets[k], pos=tickets.size() -1;;
        
        while(tickets[k]>0){
            for(int i = 0;i<=pos; i++){
                if(tickets[k]<=0)break;
                if(tickets[i]>0){
                    no++;
                    tickets[i]--;
                }
            }
            
        
        } 
        return no;
    }
    
};
