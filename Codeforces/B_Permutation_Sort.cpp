#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int main() {
    sync
    CASE{
        ll int n,c=0; cin>>n;
        ll int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==i+1) c++;
        }
        if(n==c) cout<<"0"<<endl;
        else if(a[0]==1 || a[n-1]==n) cout<<"1"<<endl;
        else if(a[0]==n && a[n-1]==1) cout<<"3"<<endl;
        else cout<<"2"<<endl;
    }
    return 0;
}