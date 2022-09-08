class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
    //     set <pair<int,pair<int,int>>> st;
    //     int p=0,q=0;
    //     for(auto it: strs){
    //         p=0;q=0;
    //         for(char i:it)
    //         {
    //             if(i=='1') q++; if(i=='0') p++;
    //             //if(p>m or q>n) continue; 
    //         }
    //         if(p>m or q>n) continue;
    //         set<int>::reverse_iterator rit;
    //         for(rit=st.rbegin(); rit!=st.rend();rit++){
    //             if((*rit.second).first+p<m and (*rit.second).second+q<n)
    //                 pair p1=make_pair((*rit.second).first+p,
    //                                             (*rit.second).second+q));
    //             else continue;
    //             st.insert(make_pair(*rit.first++,p1));
    //         }
    //     }
    //     return *st.rbegin().first;
    // }
  vector<vector<int>> memo(m+1, vector<int>(n+1, 0));
  int numZeroes, numOnes;

  for (auto &s : strs) {
    numZeroes = numOnes = 0;
    for (auto c : s) {
      if (c == '0')
	numZeroes++;
      else if (c == '1')
	numOnes++;
    }
    for (int i = m; i >= numZeroes; i--) {
	for (int j = n; j >= numOnes; j--) {
          memo[i][j] = max(memo[i][j], memo[i - numZeroes][j - numOnes] + 1);
	}
    }
  }
  return memo[m][n];
}
    
};
