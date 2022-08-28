class Solution {
    public:
    int countSubstrings(string s) {
	int n = s.size();

	// dp[left][right] represent whether the substring [left,right] is palindromic or not
	// row index is the left index of substring, column index is the right index of substring
	int dp[n][n];

	// init the matrix with zero
	memset(dp, 0, sizeof(dp));

	int count = 0;

	// each character in the string is a palindromic string, so set dp[i][i] to 1
	for (int i = 0; i < n; i++) {
		dp[i][i] = 1;
		count++;
	}


	for (int right = 1; right < n; right++) {
		for (int left = 0; left < right; left++) {
			// a substring is palindromic if the characters at left index and right index are equal and:
			// 1) left and right index are next to each other OR
			// 2) the substring [left+1,right-1] is palindromic (which was already determined)
			if (s[left] == s[right] && (left+1==right || dp[left+1][right-1])) {
				dp[left][right] = 1;
				count++;
			}
		}
	}

	return count;
}
    
    
    
    
    
    /*
    public:
    int static t[1001][1001];
    bool isPalindrome(string s,int i,int j){
        if(i==j) return true;
        if(i>j) return true;
        while(i<j) {
            if(s[i]!=s[j]) return false;
            i++;j--;
        }
        return true;
    }
    int Solve(string s,int i,int j){
        if(i>j) return 0;
        int mn=-1;
        if(isPalindrome(s,i,j)==true) {return t[i][j]=0;}
        if(t[i][j]!=-1) return t[i][j];
        for(int k=i;k<=j-1;k++){
            int temp=1+Solve(s,i,k)+Solve(s,k+1,j);
            if(temp>mn) mn=temp;
        }
        return t[i][j]=mn;
    }
    int countSubstrings(string s) {
        memset(t,-1,sizeof(t));
        int n=s.length();
        int res= Solve(s,0,n-1);
        return res;
    }*/
    
    /*
    public:
    int countSubstrings(string s) {
        int n = s.size();
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            palindromic(s, i, i, cnt);  //judge odd substring
            palindromic(s, i, i+1, cnt);//judge even substring
        }
        return cnt;
    }
    
    private:
    void palindromic(string s, int left, int right, int& cnt) { //judge if a substring is palindromic
        while(left >=0 && right < s.size() && s[left] == s[right]) {
            cnt++;
            left--;
            right++;
        }
    }*/
};
