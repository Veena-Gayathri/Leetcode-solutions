class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack <int> s;
        vector <int> v;
        for(int i=0; i< a.size();i++){
            if(a[i]>0) s.push(a[i]);
            else if(s.size()>0) {
                if(a[i]<0 ){
                    while(!s.empty() and s.top()>0 and s.top()<abs(a[i])) s.pop();
                    if(!s.empty() and s.top()==abs(a[i])) s.pop();
                    else{
                        if(s.empty() or s.top()<0) s.push(a[i]);
                    }
                }
            }
            else s.push(a[i]);
        }
        while(s.size()!=0){
            v.push_back(s.top()); 
            s.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
