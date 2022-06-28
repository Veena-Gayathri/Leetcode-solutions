class Solution {
public:
    int largestInteger(int num) {
        priority_queue <int> minh1;
        priority_queue <int> minh0;
        string n; int m;
        string str= to_string(num);
        for(char c: str){
            int t= (int) c;
            if(t%2 ==0) minh0.push(c);
            else minh1.push(c);
        }
        for(char c:str){
            int t=(int) c;
            if(t%2==0){ n+=minh0.top(); minh0.pop();}
            else { n+= minh1.top(); minh1.pop(); }
        }
        m=stoi(n);
        return m;
    }
};
