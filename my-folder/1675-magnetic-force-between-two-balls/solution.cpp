class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int start=0;
        int end= *max_element(position.begin(),position.end());
        sort(position.begin(),position.end());
        while(start<=end){
            int mid=start+(end-start)/2; int count=1;
            int curr=position.front();
            for(int i=0;i<position.size();i++){
                if(position[i]-curr >= mid){
                    curr=position[i]; count++;
                }
            }
            if(count>=m) start=mid+1;
            else end=mid-1;
        }return end;
    }
};
