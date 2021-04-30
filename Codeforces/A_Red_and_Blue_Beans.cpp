#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int main() {
    sync
    CASE{
        int r,b,d,d2=0; cin>>r>>b>>d;
        int maxi=max(r,b);
        int mini=min(r,b);
        int d1=maxi/mini;
        if(maxi%mini!=0) d2=1+(maxi/mini);
        if((d1-1)<=d && (d2-1)<=d) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}