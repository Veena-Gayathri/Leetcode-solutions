class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        for( int & a :asteroids){
            while(!ans.empty() && ans.back()>0 && a<0){
                int sum = a + ans.back(); 
                if(sum < 0){
                    ans.pop_back();
                }
                else if(sum > 0){
                   a=0;
                }
                else{
                    // in case of sum == 0 
                    ans.pop_back(); 
                    a = 0;
                }
            }
            if(a!=0){
                ans.push_back(a);
            } 
        }
        return ans;
    }
};
