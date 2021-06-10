#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int main() {
    sync
    CASE{
        int n; cin>>n;
        int a=(int)sqrt(2*(n-1)+1);
        int ans=0;
        for(int i=2;i<=a;i++)
        {
            double b1=((double)i*(double)i-1)/2;
            int b=(i*i-1)/2;
            if(b1==b) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}