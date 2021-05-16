#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int main() {
    sync
    ll int n; cin>>n;
    string s; ll int a;
    vector<pair<int,string>> v;
    while(n--)
    {
        cin>>s>>a;
        v.push_back(make_pair(a,s));
    }
    sort(v.rbegin(), v.rend());
    cout<<v[1].second<<endl;
    return 0;
}