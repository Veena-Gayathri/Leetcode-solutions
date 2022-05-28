class Solution {
//private: int F[31];
public:
/*    void init(int n)
    {
        F[0]=0;F[1]=1;
        if(n>1){
            for(int i=2;i<n;i++){
                 F[i]=-1;
            }
        }
    }*/
    int fib(int n) {
       /* if (F[n]!=-1)
        {
            return F[n];
        }*/
        if(n<=1){return n;}
        int k;
        k=fib(n-1)+fib(n-2);
        return k;
    }
};

/*int main()
{
    int n,res;
    Solution sol1;
    cin>>n;
    sol1.init(n);
    res= sol1.fib(n);
    cout<<res<<endl;
    return 0;
}*/
