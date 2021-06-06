#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int main() {
    sync
    CASE{
        ll int a;
        vector<int> v;
        for(int i=0;i<4;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll int p=v[0],q=v[1],r=v[2],s=v[3];
        sort(v.begin(),v.end(),greater<ll int> ());
        if((max(p,q)==v[0] || max(p,q)==v[1]) && (max(r,s)==v[0] || max(r,s)==v[1]))
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
    return 0;
}