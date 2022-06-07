class Solution {
public:
    int BS(vector<int>& nums, int start,int end,int target) {
        if(start==end&&nums[start]==target) return start;
        if(start==end&&nums[start]!=target) return -1;
        while(start<=end )
        {
            int mid= (start+end)/2;
            if (nums[mid]==target) return mid;
            else if(nums[mid]<target) start=mid+1; 
            else end= mid-1;
        }
        return -1;
    }
    int Index(vector<int>&nums){
        int start=0,end=nums.size()-1;
        while(start<end){
            if(nums[start]<nums[end]) return start;
            int mid=(start+end)/2;
            if(nums[mid]>=nums[start]) start=mid+1; 
            else end=mid;
        }
        return start;
    }
    int search(vector<int>& nums, int target) {
       /* int start=0,end=nums.size()-1,index;
        if(start==end) index=0;
        else{
            while(start<end){
                if(nums[start]<nums[end]) index=start;
                int mid=start+(end-start)/2;
                if(nums[mid]>nums[start]) {
                    start=mid+1;
                    if(start==end) index=start;
                }
                else if(nums[mid]==nums[start]) 
                {
                    start= mid+1;
                    if(start==end) index=start;}
                else end=mid;
            }
        }*/
        int index=Index(nums);
        cout<<index;
        int a,b;
        int start=0;
        int end=nums.size()-1;
        
        a=BS(nums,start,index-1,target);
        cout<<a;
        b=BS(nums,index,end,target);
        cout<<b;
        if(a==-1&&b==-1) return -1;
        else return max(a,b);
    }
};
