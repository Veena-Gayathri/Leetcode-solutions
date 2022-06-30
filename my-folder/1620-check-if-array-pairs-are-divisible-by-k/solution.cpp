class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        if(arr.size()&1) return false;
        unordered_map<int,int>m;
        for(auto x:arr) m[(x%k + k)%k]++;    
        for(auto x:arr)
        {
            int rem=(x%k + k)%k;
            if(rem==0)                       
            { 
                if(m[rem]& 1) return false;      
            }         
            else if(m[rem] != m[k - rem]) return false;  
        }
        return true;
    }

};

/*
        unordered_map <int,int> mp;
        for(auto it:arr) mp[it%k]++;
        if(mp[0]>2) return true;
        

        for(int i=0;i<k;i++) 
            if(mp.find(k-i)!=mp.end()) return true;
        return false;
        
        
                int n=arr.size();
        for (int i=0;i<n;i++) for(int j=n-1;j>=0;j--){
            if((arr[i]+arr[j])%k==0) return true;
            if(i==j) break;
        }
        int j=n-2;
        for (int i=0;i<n;i++){
            if((arr[i]+arr[j])%k==0) return true;
            if(i+1==j) break;
            j--;
        }
        return false;
    }

*/











        /*for(int i=0;i<k;i++){
            if(mp[i] and mp[t--]) return true;}
            
            long long res = 0;
        for(int x:arr) res +=x; 
        if(res % k == 0) return true;
            
            */
        /*for(auto it:mp) {
            sum+=it.first;
            if(mp.find(sum%k)!=mp.end()) return true;
        }*/
       /* int t=k-1;
        for(int i=0;i<k;i++)
            if((i+t)%k==0 and mp[i] and mp[t--]) return true;*/
