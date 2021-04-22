// https://practice.geeksforgeeks.org/problems/consecutive-1s-not-allowed1912/1#
#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution{
public:
    #define mod 1000000007
	#define ll long long
	ll countStrings(int n) {
	    ll int dp[n+1]={0};
	    dp[1]=2; dp[2]=3;
	    for(ll int i=3;i<n+1;i++)
	    {
	        dp[i]=(dp[i-1]%mod+dp[i-2]%mod)%mod;
	    }
	    return dp[n];
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
} 