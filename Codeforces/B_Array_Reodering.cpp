#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,n) for(ll i=0;i<n;i++)
#define fa(i,a,b) for(ll i=a;i<=b;i++)
#define fr(i,n) for(ll i=n-1;i>=0;i--)
#define fi first
#define se second
#define vll vector<ll>
#define mll map<ll,ll>
#define sll set<ll>
#define pll pair<ll,ll>
#define all(a) a.begin(),a.end()
#define csp(x) cout<<fixed<<setprecison(x)
#define setbits(x) __builtin_popcount(x)
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int &k : v) cin >> k;

    sort(v.begin(), v.end(), [&](int &a, int &b) {
        if (a % 2 == 0 && (b & 1) ) return true;
        if ( (a & 1) && b % 2 == 0) return false;
        return (a < b);
    });

    int answer = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (__gcd(v[i], 2 * v[j]) > 1)
                answer++;
        }
    }

    cout << answer << endl;
}

int main() {
    sync
    CASE{
        solve();
    }
    return 0;
}