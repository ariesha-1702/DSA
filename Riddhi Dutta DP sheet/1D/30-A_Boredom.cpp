#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAX = 1e5+1;
int main() {
    ll int n,a; cin >> n;
    vector<ll> cnt(MAX);
    vector<ll> dp(MAX);
    for (int i = 0; i < n; i++) {
        cin >> a;
        cnt[a]++;
    }

    dp[1] = cnt[1];
    for (int i = 2; i < MAX; i++) dp[i] = max(dp[i - 1], cnt[i] * i + dp[i - 2]);
    cout << dp[MAX - 1];

    return 0;
}
