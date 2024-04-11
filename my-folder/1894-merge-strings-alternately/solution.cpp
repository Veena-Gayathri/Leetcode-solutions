class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=word1.length(),j=word2.length();
        int k=0,l=0;
        string s="";
        while(i>0 and j>0){
            s+=word1[k];k++;i--;
            s+=word2[l];l++;j--;
        }
        if(j>0){
            for(int a=l; a<word2.length(); a++){
                s+=word2[a];
            }
        }
        else{
            for(int a=k; a<word1.length(); a++){
                s+=word1[a];
            }
        
        }
        return s;
    }
};
