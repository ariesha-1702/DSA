#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int main() {
    sync
    ll int n,k,x,a,f=1; cin>>n>>k>>x;
    multiset<ll int> m,m1;
    for(ll int i=0;i<n;i++) { cin>>a; m.insert(a); }
    k%=64;
    while(k--)
    {
        if(f){
            ll int i=0;
            for(auto k:m) (i%2==0)?m1.insert(k^x):m1.insert(k),i++;
            m.clear(); f=0;
        }
        else{
            ll int i=0;
            for(auto k:m1) (i%2==0)?m.insert(k^x):m.insert(k),i++;
            m1.clear(); f=1;
        }
    }
    if(m.size()) cout<<*m.rbegin()<<" "<<*m.begin()<<endl;
    else cout<<*m1.rbegin()<<" "<<*m1.begin()<<endl;
    return 0;
}