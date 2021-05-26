#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int main() {
    sync
    CASE{
        ll int n; cin>>n;
        double a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int i=0,j=n-1,c=0;
        while(i<=j)
        {
            double avg=(a[i]+a[j])/2;
            if(a[j]>avg) c++;
            j--;
        }
        cout<<c<<endl;
    }
    return 0;
}