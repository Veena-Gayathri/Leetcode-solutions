class Solution {
public:
    int longestWPI(vector<int>& hours) {
        int n=hours.size();
    
    unordered_map<int,int> mp;
    int result=0,sum=0;
    for(int i=0;i<n;i++) {
        if(hours[i]>8) {
            sum++;
        }
        else {
            sum--;
        }
        
        if(sum>0)   result=i+1;
        else if(sum<=0) {
            if(mp.find(sum-1)!=mp.end()) {
                result=max(result,i-mp[sum-1]);
            }
        }
        if(mp.find(sum)==mp.end())
            mp[sum]=i;
    }
    return result;
    }
};


/*
        int n=hours.size();
        for(auto it:hours){ if(it>8) it=1; else it=0;}
        unordered_map <int,int> m;
        int h=0,sum=0;
        for(int i=0; i<n;i++){
            sum+=hours[i];
            if(i-h==2*sum-1) {m[i-h]=sum;h=i;sum=0;}
        } 
        int maxn=0;
        for(auto it:m){
            if(it.second>maxn) maxn=it.second; 
        }
        return maxn;
        
        
        int n=hours.size(),size=0;
        stack <int> index;
        for(int i=0;i<n;i++) if(hours[i]>8) index.push(i); size++;
        while(!index.empty()){
            if(index.top()>size*2-1) {index.pop(); size--;}
            else { int high=index.top(),low; index.pop();
                  if(index.empty()) return 1;
                  while(!index.empty()){
                    low=index.top(); index.pop();
                }
                  return size*2-1;
            }
        }
        return 0;
        
        stack <int> s;
        int n=hours.size();
        for(int h=0;h<n; h++){
            int i=h,count=0;
            while((i-h)<=2*count && i<n){
                if(hours[i]>8) count++;
                i++;
            }
            cout<<count;
            if(s.size()==0) s.push(count);
            else if(s.top()>count) s.push(count);
        }
        return s.top();
        
        
        
      int n= hours.size();
        vector <int> v;
        stack <int> s;
        for(int i=0;i<n;i++){
            if(hours[i]>8) v.push_back(1);
            else v.push_back(-1);
        }
        for(int i=0;i<n;i++){
            int count=0,sum=v[i],t=i;
            while(sum>0 && t<n-1){
                count++; sum+=v[t+1]; t++;
            }
            cout<<count;
            if(s.empty()) s.push(count);
            else if(count> s.top()) s.push(count);
        }
        return s.top();   
        
*/
