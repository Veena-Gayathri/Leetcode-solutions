class Solution {
public:
    int mySqrt(int num) {
        int start=0,end=num/2;
        if(num==0) return 0;
        if(num==1||num==2||num==3) return 1;
        if(num==4) return 2;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid==num/mid) return mid;
            else if(mid>num/mid) end=mid-1;
            else start=mid+1;
        }return start-1;
    }
};
