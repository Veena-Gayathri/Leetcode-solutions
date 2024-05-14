// Brute force solution : 
/*
    string removeDuplicates(string s, int k) {
        int flag =1;
        int count = 0;
        while (flag !=0) {
            cout<<"entered"<<endl;
            flag =0;
            char c= s[0];
            int count = 0;
            for(int i=0; i<s.length(); i++){
                
                if(s[i]==c){
                    count ++;
                }
                else{
                    c = s[i];
                    count =1;
                }
                cout<<flag; 
                if(count == k){
                    s.erase(i-k+1,k);
                    flag =1;
                    cout<<flag;
                }
            }
        }
        return s;
    }
*/


class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack <pair<char,int> > st;
        char c= s[0];
        int count =0;
        for( int i=0; i< s.length(); i++){
            if(!st.empty()){
                if(s[i]==st.top().first){
                    count= st.top().second;
                    count++;
                    st.pop();
                    st.push({s[i],count});
                }
                else{
                    count =1;
                    st.push({s[i], count});
                    c = s[i];
                }
            }
            else{
                count =1;
                st.push({s[i], count});
                c = s[i];
            }
            if(st.top().second ==k){
                st.pop();
            }
        }
        string res="";
        while(!st.empty()){
            int loop = st.top().second;
            while(loop>0){
                res+=st.top().first;
                loop--;
            }
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
