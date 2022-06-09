class Solution {
public:
    bool isValid(vector<int>&weights, int size,int days,int max){
        int s=1; int sum=0;
        for(int i=0;i<size;i++){
            sum=sum+weights[i];
            if(sum>max){
                s++; sum=weights[i];
            }
            if(s>days) return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        if(days>weights.size()) return -1;
        int start=*max_element(weights.begin(),weights.end()),
        end=accumulate(weights.begin(), weights.end(), 0);
        int res=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isValid(weights,weights.size(),days,mid)==true){
                res=mid; end=mid-1;
            }
            else start=mid+1;
        }
        return res;
    }
};
