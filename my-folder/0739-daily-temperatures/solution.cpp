class Solution {
public:
    vector<int> ngr(vector<int> arr, int n){
        stack<int> st;
        vector<int> vect;
    
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && arr[i] >= arr[st.top()])
                st.pop();
            
            st.empty() ? vect.push_back(0) : vect.push_back(st.top());
            st.push(i);
        }
    
        reverse(vect.begin(), vect.end());
        return vect;
    }
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector <int> v;
        v= ngr(temperatures, temperatures.size());
        for(int i=0; i<temperatures.size(); i++){
            if(v[i]!=0) v[i]=v[i]-i;
        }
        return v;
    }
};
