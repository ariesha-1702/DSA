#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int main() {
    sync
    CASE{
        int n; cin>>n;
        int a[n],pos=0,neg=0,m=INT_MIN;
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
            if(a[i]>=0) pos++;
            else neg++;
            if(a[i]>=m) m=a[i];
        }
        if(neg>0) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<m+1<<endl;
            for(int i=0;i<=m;i++) cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}