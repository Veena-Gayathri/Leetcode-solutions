class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        {
        int rightSum = accumulate(nums.begin(),nums.end(),0);
        int leftSum = 0;
        for(int i=0;i<nums.size();i++){            
            rightSum -= nums[i];
            if(leftSum == rightSum){
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
        }
    }
};
    
    
    /*
        int n=nums.size();
        int sum=0;
        vector <int> v1;
        vector <int> v2(n);
        for(int i=0;i<n;i++){
            sum+=nums[i];
            v1.push_back(sum);
        }
        sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=nums[i];
            v2[i]=sum;
        }
        for(int i=0;i<n;i++){
            if(v1[i]==v2[i]) return i;
        }
        return -1;
    }*/

