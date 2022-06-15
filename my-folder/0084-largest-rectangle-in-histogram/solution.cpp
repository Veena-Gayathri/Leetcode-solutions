class Solution {
public:
    int largestRectangleArea(vector<int>& A) {
    stack<pair<int,int>> s;
    vector<int> index_NSR;
    vector<int> index_NSL;
    int n = A.size()-1;
    for(int i=n;i>=0;i--){
        
        if(s.empty()){
            index_NSR.push_back(n+1);
        }else if(s.top().first<A[i]){
            index_NSR.push_back(s.top().second);
        }else if(!s.empty() && s.top().first>=A[i]){
            while(!s.empty() && s.top().first>=A[i]){
                s.pop();
            }
            if(s.empty()){
                index_NSR.push_back(n+1);
            }else{
                index_NSR.push_back(s.top().second);
            }
        }
        
        s.push({A[i],i});
    }
    reverse(index_NSR.begin(),index_NSR.end());
    
    while(!s.empty()){
        s.pop();
    }
    
    for(int i=0;i<=n;i++){
        
        if(s.empty()){
            index_NSL.push_back(-1);
        }else if(s.top().first<A[i]){
            index_NSL.push_back(s.top().second);
        }else if(!s.empty() && s.top().first>=A[i]){
            while(!s.empty() && s.top().first>=A[i]){
                s.pop();
            }
            if(s.empty()){
                index_NSL.push_back(-1);
            }else{
                index_NSL.push_back(s.top().second);
            }
        }
        s.push({A[i],i});
    }
    
    
    vector<int> area;
    
    for(int i=0;i<=n;i++){
        area.push_back((index_NSR[i]-index_NSL[i]-1) * A[i]);
    }
    
    int mx = INT_MIN;
    
    for(int i=0;i<=n;i++){
        if(area[i] > mx){
            mx = area[i];
        }
    }
    return mx;
}

};
