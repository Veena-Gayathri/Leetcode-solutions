class Solution {
public:
    int trap(vector<int>& arr) {
        int n =arr.size();
        vector<int> right_max(n);
        vector<int> left_max(n);
        // no matter what we can't store water on edge buildings
        left_max[0]=arr[0];
        for(int i=1;i<n;i++){
           left_max[i]=max(arr[i],left_max[i-1]);
        }
        right_max[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            right_max[i]=max(arr[i],right_max[i+1]);
        }
        int sum=0;
        for(int i=1;i<=n-2;i++){
            sum+=min(left_max[i],right_max[i])-arr[i];
        }
        return sum;
    }
};


        /*int n=height.size();
        int mxl[n];
        int mxr[n];
        int water[n];
        int sum=0;
        mxl[0]= height[0];
        mxr[n-1]= height[n-1];
        for(int i=1;i<n;i++){
            mxl[i]=max(mxl[i-1],height[i]);
        }
        for(int i=n-2; i>=0;i++){
            mxr[i]=max(mxr[i+1],height[i]);
        }
        for(int i=0;i<n;i++) water[i]=min(mxl[i],mxr[i])-height[i];
        for(int i=0;i<n;i++) sum+= water[i];
        return sum;*/
