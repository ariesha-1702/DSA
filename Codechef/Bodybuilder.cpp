#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int main() {
    sync
    CASE{
        ll int n,k; cin>>n>>k;
        ll int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        ll int maxi=b[0],res=b[0];
        for(int i=1;i<n;i++)
        {
            res=res-(a[i]-a[i-1])*k;
            res=res>=0?res:0;
            res+=b[i];
            maxi=max(maxi,res);
        }
        cout<<maxi<<endl;
    }
    return 0;
}