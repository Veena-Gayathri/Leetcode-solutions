class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int add) {
         int eligible = 0, n = flowerbed.size();
         for(int i=0;i<n;i++){
            if(flowerbed[i]==0){
                if((i+1<n && flowerbed[i+1]==0) && (i>0 && flowerbed[i-1]==0)){
                    flowerbed[i] = 1;
                    eligible++;
                }
                if(i==0 && flowerbed[i]==0){
                    flowerbed[i] = 1;
                    eligible += i+1<n ? !flowerbed[i+1] : 1;
                }else if(i==n-1 && flowerbed[i]==0 && flowerbed[i-1]==0){
                    flowerbed[i] = 1;
                    eligible ++;
                }
            }
        }

        if(eligible>=add){
            return true;
        }else{
            return false;
        }

    }
};
