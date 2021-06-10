#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int main() {
    sync
    int n,m; cin>>n>>m;
    string s,t; cin>>s>>t;
    int left[m],right[m];

    for(int i=0,j=0;i<m;i++,j++)
    {
        while(t[i]!=s[j]) j++;
        left[i]=j;
    }

    for(int i=m-1,j=n-1;i>=0;i--,j--)
    {
        while(t[i]!=s[j]) j--;
        right[i]=j;
    }

    int max_width=0;
    for(int i=1;i<m;i++)
    {
        max_width=max(max_width,right[i]-left[i-1]);
    }
    cout<<max_width<<endl;
    return 0;
}