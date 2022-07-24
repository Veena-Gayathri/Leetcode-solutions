class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        //if(k==0) return 0;
        long i=0,j=0,N=nums.size(),prod=1,count=0;
        for(;j<N;++j){
            prod*=nums[j];
            while(i<=j && prod>=k) prod/=nums[i++];
            count+=j-i+1;
        }
        return count;
    }
};
/* int i=0,j=1,count=0,product=1,n=nums.size()-1;
        product=nums[i];
        while(i!=n & j<n){
            if(nums[i]<k) count++;
            if(product<k) {product=product*(nums[j]); count++; j++;}
            else if(product>=k){ product=product/nums[i]; i++;}
            cout<<product<<endl;
            if(i==j) j++;
        }
        return count;
        */
