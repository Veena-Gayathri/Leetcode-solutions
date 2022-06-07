class Solution {
    
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int l = 0,r=nums.size()-1;
        while(l<=r){
            int m = l + (r-l)/2;
            if(m%2){
                if(nums[m-1]==nums[m])
                    l = m+1;
                else{
                    r = m-1;
                }
            }else{
                if(nums[m]==nums[m+1]){
                    l = m+1;
                }else{
                    r = m-1;
                }
            }
        }
        return nums[l];
    }
};

/*for(int i=0;i<end;i++){
            if(nums[i]==nums[i+1]||nums[i]==nums[i-1]) {i++;continue;}
            else if(nums[i]!=nums[i+1]||nums[i]!=nums[i-1]){int t= nums[i] ; return t;}
            else return -1;
        }
        return 0;*/



















        /*
        int end= nums.size();
        int start=0;
        vector<int> v;
        v= nums;
        while(start<=end)
        {
            int mid= start+(end-start)/2;
            if(v[mid]!= v[mid+1]&& v[mid]!= v[mid-1]) return v[mid];
            else if(v[mid]==v[mid+1]||v[mid]==v[mid-1]) 
            {
                int k=0;
                k= singleNonDuplicate(v.erase(v.begin(),v.begin()+(mid-start)));
                int q=0;
                q= singleNonDuplicate(v.erase(v.begin+start+end-mid,v.end()));
            }
        }*/
