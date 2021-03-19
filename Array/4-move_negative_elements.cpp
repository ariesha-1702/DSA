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

void move_negative_elements(ll int a[], int n)
{
    // coode here 
    ll t,start=0,end=n-1;
    while(start<=end)
    {
        if(a[start]<0 && a[end]<0) start++;
        else if(a[start]>=0 && a[end]>=0) end--;
        else if(a[start]>=0 && a[end]<0)
        {
            t=a[start]; a[start]=a[end]; a[end]=t; start++; end--;
        }
        else 
        {
            start++; end--;
        }
    }
    f(i,n) cout<<a[i]<<" ";
    
}

int main() {
    sync
    ll int a[]={1,5,4,-8,-9,8,0,0,-95};
    move_negative_elements(a,9);
    return 0;
}