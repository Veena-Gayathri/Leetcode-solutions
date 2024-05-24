class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start=0;
        for(int i=0;i<arr.size();i++){
            int t= arr[i]-start;
            if(k>=t){
                k = k-t+1;
                start = arr[i];
                cout<<start<<' ';
            }
            else{
                start += k;
                return start;
            }
        }
        if(k>0){
           start += k;
        }
        return start;
    }

};
