// https://www.codechef.com/ZCOPRAC/submit/ZCO14004
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n],dp[n]; 
    for(int i=0;i<n;i++) cin>>a[i];
    if(n==1) cout<<a[0]<<endl;
    else if(n==2) cout<<(a[0]+a[1])<<endl;
    else if(n==3) cout<<max({a[0]+a[1],a[1]+a[2],a[0]+a[2]})<<endl;
    else{
        dp[0]=a[0]; dp[1]=a[0]+a[1]; dp[2]=max({a[0]+a[1],a[1]+a[2],a[0]+a[2]});
        for(int i=3;i<n;i++)
        {
            // 3 cases will be there
            // 1.) will not play ith match then earning=dp[i-1]
            // 2.) will play ith match and not play (i-1)th match then earning=dp[i-2]+a[i]
            // 3,) will play both ith and (i-1)th match then earning=dp[i-3]+a[i]+a[i-1]
            dp[i]=max({dp[i-1],dp[i-2]+a[i],dp[i-3]+a[i]+a[i-1]});
        }
        cout<<dp[n-1]<<endl;
    } 
}