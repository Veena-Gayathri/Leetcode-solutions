class Solution {
public:
 
    vector<int> avoidFlood(vector<int>& rains) {
        int n=rains.size();
        unordered_map <int,int> mp;
        set <int> s;
        vector <int> ans(n,0);
        for(int i=0;i<n;i++){
            if(rains[i]==0){
                s.insert(i);
                ans[i]= 1;
                continue;
            }
            if(mp.find(rains[i])==mp.end()){
                mp[rains[i]] = i;
            }
            else{
                auto change = s.lower_bound(mp[rains[i]]);
                if(change == s.end()){
                    return {};
                }
                int a = * change;
                ans[a]= rains[i];
                mp[rains[i]]= i;
                s.erase(change);
            }
            ans[i] = -1;
        }
        return ans;
    }
    
};

/*
Straightforward attempt: 56 / 82 testcases passed
Failing for the testcase: [0,1,1]
                output: [1,-1,-1]
                Expected: []
Reason: Not keeping track of respective positions of lakes and 0s
        int n=rains.size(),zero =0;
        vector <int> ans(n,-1);
        vector <int> v;
        unordered_map <int,int> mp;
        stack <int> zeroes;
        for(int i=0;i<n;i++){
            if(rains[i]==0){
                zeroes.push(i);
                zero++;
            }
            else if(mp.find(rains[i])==mp.end()){
                ans[i]= -1;
                mp[rains[i]] == 1;
            }
            else {
                if(zero>=1){
                    int temp = zeroes.top();
                    zeroes.pop();
                    ans[temp] = rains[i];
                    ans[i]= -1;
                    zero--;
                }
                else {
                    cout<<"it got here"<<endl;
                    return v;
                }
            }
        }
        while(!zeroes.empty()){
            int temp = zeroes.top();
            zeroes.pop();
            ans[temp] = 1;
        }
        return ans;
*/
