class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1||num==4) return true;
        int start=0;int end=num/2;
        /*while(end>sqrt(INT_MAX)){
            end=end/2;
        }*/
        
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid == num/mid && num%mid==0) return true;
            else if(mid >num/mid) end=mid-1;
            else start=mid+1;
        }
        return false;
    }
    /*bool isPerfectSquare(int num) {
        long int i = 1;
        for(;i*i<num;i++);
        return i*i==num;
    }*/

    /*bool isPerfectSquare(int num) {
        int lo = 1;
        int hi = num;
        while(lo<hi){
            long long m = lo + (hi-lo)/2;
            if(m*m<num) lo = m+1;
            else if(m*m>num) hi = m-1;
            else{
                lo=m;
                break;
            }
        }
        return (num%lo==0 && lo==num/lo);
    }*/
};

