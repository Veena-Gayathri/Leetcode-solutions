class Solution {
public:
  string destCity(vector<vector<string>>& paths) {                
        unordered_set<string> startingCities;
        for(auto& e: paths)  startingCities.insert(e[0]);                        
        for(auto& e: paths) 
            if(startingCities.find(e[1])==startingCities.end()) return e[1];             
        return "";
    }
};
