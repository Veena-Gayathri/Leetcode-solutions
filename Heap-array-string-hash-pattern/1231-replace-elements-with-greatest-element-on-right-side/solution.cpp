class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi = -1 , n = arr.size();
        for(int j = n-1; j>=0 ; j--){
            int temp = arr[j];
            arr[j] = maxi;
            maxi = max(temp, maxi);
        }
        return arr;
    }
};
