class Solution {
public:
    int numDecodings(string s) {
        int p = 1, pp, n = s.size();
        for(int i=n-1;i>=0;i--) {
            int cur = s[i]=='0' ? 0 : p;
            if(i<n-1 && (s[i]=='1'||s[i]=='2'&&s[i+1]<'7')) cur+=pp;
            pp = p;
            p = cur;
        }
        return s.empty()? 0 : p;   
    }
    };
/*   //O(n) time and O(n) space
int numDecodings(string s) {
        // edge cases out - leading zero and single character string
        if (s[0] == '0') return 0;
        if (s.size() == 1) return 1;
        // support variables
        int len = s.size(), dp[len];
        // preparing dp
        dp[0] = 1;
        dp[1] = (s[0] == '1' || s[0] == '2' && s[1] < '7' ? 1 : 0) + (s[1] != '0');
        for (int i = 2; i < len; i++) {
            // edge case: we quit for 2 consecutive zeros
            if (s[i] == '0' && (s[i - 1] > '2' || s[i - 1] == '0')) return 0;
            // base case: we always keep the previous set of combinations, unless we met a 0
            dp[i] = s[i] != '0' ? dp[i - 1] : 0;
            // we go and look 2 positions behind if we can make a digit in the 10-26 range
            if (s[i - 1] == '1' || s[i - 1] == '2' && s[i] < '7') dp[i] += dp[i - 2];
        }
        return dp[len - 1];
    }*/

/*
//Top down DP: fails edge cases:
       int n=s.length();
        vector <int> v(n+1,0);
        v[0]=1;
        if(s[0]=='0') return 0;
        else v[1]=1;
        for(int i=1;i<n;i++){
            int a= stoi(s.substr(i-1,2));
            if(a==0) return 0;
            if(a-10<0) v[i+1]=v[i];
            else if(a>26) v[i+1]=v[i];
            else if(a-10*(a/10)==0) {if(a>26) return 0; else v[i+1]=v[i-1];}
            else v[i+1]=v[i-1]+v[i];
        }
        if(s[n-1]=='0' and stoi(s.substr(n-2,2))>26) return 0;
        return v[n];
*/
/*

//Recursive,TLE, fails edge cases:
    int Solve(string &s, int end,int start){
        if(start<0) return 0;
        string str=s.substr(start,end-start+1);
        int a=stoi(str);
        //cout<<a<<endl;
        // if(start==1){
        //     if(a-10<0) return 1;
        //     else return 0;
        // } 
        int no=Solve(s,start-1,start-1)+Solve(s,start-1,start-2);
        if(a==0) return 0;
        else if(str.length()==2 and a-10<0) no=0;
        else if(a>26) return 0;
        else if(start==0) no++;
        return no;
    }
    int numDecodings(string s) {
        int n=s.length();
        if(s[0]=='0') return 0;
        return Solve(s,n-1,n-1)+Solve(s,n-1,n-2);
    }
    */
