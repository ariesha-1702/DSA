#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

ll int dp[12][100][2];
string a;

ll int func(ll int index=0,ll int sum=0,ll int flag=1)
{
    if(index==a.length()) return sum;
    else if(dp[index][sum][flag]!=-1) return dp[index][sum][flag];
	ll int limit=flag?a[index]-'0':9;
	ll int result=0;
	for(ll int i=0;i<=limit;i++) result+=func(index+1,sum+i,(flag && i==limit));
	return dp[index][sum][flag]=result;
}

int main()
{
    sync
    while(1)
    {
        ll int l,r; cin>>l>>r;
        if(l==-1 && r==-1) break;
        if(l!=0) l--;
        a=to_string(r);
        memset(dp,-1,sizeof(dp));
        ll int s1=func();
        memset(dp,-1,sizeof(dp));
        a=to_string(l);
        ll int s2=func();
        cout<<s1-s2<<endl;
    }
}