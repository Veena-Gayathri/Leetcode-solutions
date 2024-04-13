class Solution {
public:

    bool isVowel(char c){
        if(c== 'A' || c== 'a' || c== 'E' || c== 'e'|| c== 'I'|| c== 'i'|| c== 'O'|| c== 'o'|| c== 'U'|| c== 'u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int pt1=0;
        int pt2= k-1;
        int count=0;
        int max_count=0;
        cout<<s.length()<<endl;
        if(s.size()<k) {
            for(auto it:s){
                count+= (isVowel(it))? 1:0;
            }
            return count;
        }
        for(int i=pt1; i<=pt2; i++){
            count+= (isVowel(s[i]))? 1:0;
        }
        max_count=count;
        while(pt2<s.size()){
            // for(int i=pt1; i<= pt2; i++){
            //     count+= (isVowel(s[i]))? 1:0;
            // } 
            if(isVowel(s[pt1]) ) count--;
            if(isVowel(s[pt2+1]) ) count++;
            pt1++;
            pt2++;
            max_count= max(max_count, count);
            // count =0;
        }
        return max_count;
    }
};
