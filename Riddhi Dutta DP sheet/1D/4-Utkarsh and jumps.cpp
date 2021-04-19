//https://www.hackerearth.com/problem/algorithm/utkarsh-and-jumps/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; double p; cin>>n>>p;
    double dp[n+1]={0};
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        if(i>=3) dp[i]+=(p/100)*dp[i-2]+(1-(p/100))*dp[i-3];
        else if(i>=2) dp[i]+=(p/100)*dp[i-2];
    }
    cout<<fixed<<setprecision(6);
    cout<<dp[n];
    return 0;
}
