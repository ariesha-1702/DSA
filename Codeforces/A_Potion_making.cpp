#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int main() {
    sync
    CASE{
        int n; cin>>n;
        int x=100-n;
        int d;
        d = __gcd(x,n);
    
        x = x / d;
        n = n / d;
        cout<<x+n<<endl;
    }
    return 0;
}