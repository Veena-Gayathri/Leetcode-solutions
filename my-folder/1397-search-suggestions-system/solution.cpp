class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<string> myproducts=products;
        vector<vector<string>> vs(searchWord.length());
        sort(myproducts.begin(),myproducts.end());
        for(int i=0;i<searchWord.length();i++){
            for(int j=0;j<myproducts.size();j++){
                if(myproducts[j].substr(0,i+1)==searchWord.substr(0,i+1)){
                    vs[i].push_back(myproducts[j]);
                }
            }
            myproducts=vs[i];
        }
        for(int i=0;i<vs.size();i++){
            if(vs[i].size()>3){
                vs[i].resize(3);
            }
        }
        return vs;
    }
};
  /*  vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        int len=searchWord.length();
        sort(products.begin(),products.end());
        vector <vector<string>> v; 
        unordered_map <string,vector<string>> mp;
        for(int i=1;i<=len;i++){
            string str=searchWord.substr(0,i);
            for(auto it:products){
                if(it.substr(0,i)==str and mp.find(it)==mp.end()) mp[str].push_back(it);
            }
        }
        for(auto it:mp) {
            while(it.second.size()>3) it.second.pop_back();
            v.push_back(it.second);
        }
        reverse(v.begin(),v.end());
        while(v.size()<len) {
            vector <string> temp;
            v.push_back(temp);
        }
        return v;    
    }
};
*/
