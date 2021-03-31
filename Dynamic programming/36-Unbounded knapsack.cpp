#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int knapSack(int n, int w, int val[], int wt[])
    {
       int precalc[n+1][w+1];
       for(int i=0;i<=n;i++)
       {
           for(int j=0;j<=w;j++)
           {
               if(i==0 || j==0) precalc[i][j]=0;
               else if(wt[i-1]>j) precalc[i][j]=precalc[i-1][j];
               else precalc[i][j]=max(precalc[i-1][j],val[i-1]+precalc[i][j-wt[i-1]]);
           }
       }
       return precalc[n][w];
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  