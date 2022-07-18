class Solution {
public:
    /*int maxFrequency(vector<int>& nums, int k) {
        vector <int> v= nums;
        sort(v.begin(),v.end());
        long i=0,n=v.size(),sum=0,ans=1;
        for(int j=0;j<n;++j){
            sum+=v[j];
            while((j-i+1)*v[j]-sum>k) sum-=v[i++];
            ans=max(ans,j-i+1);
        }
        return ans;
    }*/
    int maxFrequency(vector<int>& A, int k) {
        sort(begin(A), end(A));
        long i = 0, j = 0, N = A.size(), sum = 0;
        for (; j < N; ++j) {
            sum += A[j];
            if ((j - i + 1) * A[j] - sum > k) sum -= A[i++];
        }
        return j - i;
    }
};
