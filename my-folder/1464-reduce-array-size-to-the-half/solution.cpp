class Solution {
public:
    int minSetSize(vector<int>& arr) {
        priority_queue <int> maxh;
        unordered_map <int,int> mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto i=mp.begin(); i!=mp.end();i++) maxh.push(i->second);
        int t=0; int sum=0; 
        while(!maxh.empty()){
            if(n-sum<=n/2) return t;
            else {cout<<maxh.top(); sum+=maxh.top(); maxh.pop(); t++;}
        }
        return 1;
    }
};
