class Solution {
public:

    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>m;
        for(auto x:arr) m[(x%k + k)%k]++;         
        for(auto x:arr)
        {
            int rem=(x%k + k)%k;
            if(rem==0)                       
            { 
                if(m[rem] & 1) return false;         
            }         
            else if(m[rem] != m[k - rem]) return false;
        }
        return true;
    }
};
/*
BRUTE FORCE SOLUTION:
        int div=0;
        for(int i=0;i<=arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if((arr[i]+arr[j])%k ==0) {
                    div++;
                    
                }
            }
        }
        if(div >= arr.size()/2) return true;
        return false;
*/
