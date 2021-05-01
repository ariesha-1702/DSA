// https://www.spoj.com/problems/FARIDA/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ll int t; cin>>t;
    ll int x=0;
    while(t--)
    {
        x++;
        ll int n; cin>>n;
        ll int v[n];
        for(ll int i=0;i<n;i++) cin>>v[i];

        if(n==0) { cout<<"Case "<<x<<": "<<"0"<<endl; continue; }

        if(n==1) { cout<<"Case "<<x<<": "<<v[0]<<endl; continue; }

        if(n==2) { cout<<"Case "<<x<<": "<<max(v[0],v[1])<<endl; continue; }

        ll int dp[n];
        dp[0]=v[0];
        dp[1]=max(v[0],v[1]);
        for(int i=2;i<n;i++)
        {
            // if taking gold from monster(i) then v[i]+dp[i-2]
            // if not taking gold from monster(i) then dp[i-1]
            dp[i]=max(v[i]+dp[i-2],dp[i-1]);
        }
        cout<<"Case "<<x<<": "<<dp[n-1]<<endl;
    }
}