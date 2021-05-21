#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int main() {
    sync
    CASE{
        ll int n; cin>>n;
        string s; cin>>s;
        int zeroes=0;
        for(auto k:s)
        {
            if(k=='0') zeroes++;
        }
        if(n%2!=0 && s[n/2]=='0' && zeroes!=1) cout<<"ALICE"<<endl;
        else cout<<"BOB"<<endl;
    }
    return 0;
}