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

ll int precalc[1000000];

ll int catalan(ll int n)
{
    precalc[0] = precalc[1] = 1;

    for (int i = 2; i <= n; i++) {
        precalc[i] = 0;
        for (int j = 0; j < i; j++)
            precalc[i] += precalc[j] * precalc[i-j-1];
    }
    return precalc[n];
}

int main() {
    sync
    return 0;
}