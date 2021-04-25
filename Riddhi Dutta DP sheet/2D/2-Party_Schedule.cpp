// https://www.spoj.com/submit/PARTY/id=27775439
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

void knapsack(int budget, int cost[], int fun[], int n) 
{ 
    int dp[n+1][budget+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=budget;j++)
        {
            if(i==0 || j==0) dp[i][j]=0;
            else if(cost[i-1]>j) dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j],fun[i-1]+dp[i-1][j-cost[i-1]]);
        }
    }
    int best,i;
    for(i=budget,best=dp[n][budget];i>=0;i--)
		if(dp[n][i]<best) break;
    
    cout<<i+1<<" "<<dp[n][budget]<<endl;
}

int main() {
    sync
    while(1){
        int budget,n; cin>>budget>>n;
        if(budget==0 && n==0) break;
        int cost[n],fun[n];
        for(int i=0;i<n;i++) cin>>cost[i]>>fun[i];
        knapsack(budget,cost,fun,n);
    }
    return 0;
}