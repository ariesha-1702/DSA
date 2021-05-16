#include<bits/stdc++.h>
using namespace std;
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int main() {
    sync
    int a,b,c;
    cin>>a>>b>>c;
    int mini=min({a,b,c});
    int maxi=max({a,b,c});
    int mid=a+b+c-mini-maxi;
    if(mid-mini==maxi-mid) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}