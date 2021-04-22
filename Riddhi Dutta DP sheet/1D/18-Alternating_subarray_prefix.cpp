// https://www.codechef.com/submit/ALTARAY
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int dp[n];
        dp[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            if((a[i]<0 && a[i+1]>=0) || (a[i]>=0 && a[i+1]<0)) dp[i]=dp[i+1]+1;
            else dp[i]=1;
        }
        for(int i=0;i<n;i++) cout<<dp[i]<<" ";
        cout<<endl;
    }
}