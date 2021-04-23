// https://www.codechef.com/ZCOPRAC/submit/ZCO12004
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int dp[n];
    dp[0]=a[0]; dp[1]=a[1];
    for(int i=2;i<n;i++)
    {
        dp[i]=min(dp[i-1],dp[i-2])+a[i];
    }
    int dp1[n];
    dp1[n-1]=a[n-1]; dp1[n-2]=a[n-2];
    for(int i=n-3;i>=0;i--)
    {
        dp1[i]=min(dp1[i+1],dp1[i+2])+a[i];
    }
    cout<<min(dp[n-1],dp1[0]);
}