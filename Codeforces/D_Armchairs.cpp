#include<bits/stdc++.h>
using namespace std;
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int dp[5010][5010];
vector<int> ones,zeroes;

int func(int one,int zero)
{
    if(one<0) return 0;
    if(zero<0) return 1e9;
    if(dp[one][zero]!=-1) return dp[one][zero];
    int res = min(abs(ones[one]-zeroes[zero])+func(one-1,zero-1),func(one,zero-1));
    return dp[one][zero]=res;
}

int main() {
    sync
    int n,a; cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a) ones.push_back(i);
        else zeroes.push_back(i);
    }
    memset(dp,-1,sizeof(dp));
    cout<<func(ones.size()-1,zeroes.size()-1);
    return 0;
}