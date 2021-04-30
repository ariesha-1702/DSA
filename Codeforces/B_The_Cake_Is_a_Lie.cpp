#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int main() {
    sync
    CASE{
        int r,c,k; cin>>r>>c>>k;
        if(((c-1)+(r-1)*c)==k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}