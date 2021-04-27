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
#define CASE ll int t,t1; cin>>t; t1=1; while(t--)

int main() {
    sync
    CASE{
        ll int n,k,c=0; cin>>n>>k;
        string s; cin>>s;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1]) c++;
        }
        cout<<"Case #"<<t1<<": "<<abs(k-c)<<endl;
        t1++;
    }
    return 0;
}