// https://www.codechef.com/submit/STRMRG

#include<bits/stdc++.h>
using namespace std;

int longestCommonSupersequence(string s1, string s2) {
        
    int n=s1.size();
    int m=s2.size();
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0){ dp[i][j]=0; continue; }
            if(s1[i-1]==s2[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return m+n-dp[n][m];
}


int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        string a,b,x,y; cin>>a>>b;
        x=a[0]; y=b[0];
        for(int i=1;i<n;i++)
        {
            if(a[i-1]!=a[i]) x+=a[i];
        }
        for(int i=1;i<m;i++)
        {
            if(b[i-1]!=b[i]) y+=b[i];
        }
        cout<<longestCommonSupersequence(x,y)<<endl;
    }
    return 0;
}