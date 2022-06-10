class Solution {
public:
    int findValue(vector<int>&nums, int mid){
        /*int end= nums.size()-1;
        int start =0; int i;
        while(start<=end )
        {
            int mid= (start+end)/2;
            if (nums[mid]==target) i= mid;
            else if(nums[mid]<target) start=mid+1; 
            else end= mid-1;
        }
        long t=((i-1)*target)+accumulate(nums.begin()+i,nums.end(),0);
        */ 
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mid) sum+= mid;
            else sum+=nums[i];
        }
        return sum;    
    }
    int findBestValue(vector<int>& arr, int target) {
        long sum= accumulate(arr.begin(),arr.end(),0);
        if(sum<=target) return *max_element(arr.begin(),arr.end());
        int start=0;
        int end= target;
        sort(arr.begin(), arr.end(), greater<int>());
        while(start<=end){
            int mid= start-(start-end)/2;
            int t= findValue(arr,mid);
            if(t<target) {
                start=mid+1;
            }
            else if(target==t) return mid;
            else {
                end=mid-1;}
        }
        int first = findValue(arr,start);
        int second = findValue(arr,end);

        if(abs(first-target) < abs(second-target)) return start;

        return end;
    }
};
