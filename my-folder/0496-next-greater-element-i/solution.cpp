class Solution {
public:
    
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;
        unordered_map<int, int> m;
        for (int n : nums) {
            while (s.size() && s.top() < n) {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans;
        for (int n : findNums) ans.push_back(m.count(n) ? m[n] : -1);
        return ans;
    }
};

/*
    vector<int> ans(findNums.size(), -1);
    for (int i=0; i<(int)(findNums.size()); i++) {
        auto itr = m.find(findNums[i]);
        if (itr != m.end()) {
            ans[i] = itr->second;
        }
    }
    return ans;

*/
