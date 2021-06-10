#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int main() {
    sync
    CASE{
        int n; cin>>n;
        int a[n];
        map<int,int> m;
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
            m[a[i]]++;
        }
        int ans=INT_MAX;
        map<int,int> m1;
        for(auto k:m)
        {
            m1[k.second]++;
        }
        
        for(auto k:m1)
        {
            int s=0;
            for(auto j:m1)
            {
                if(k.first>j.first) s+=j.first*j.second;
                else if(k.first<j.first) s+=(j.first-k.first)*j.second;
            }
            ans=min(ans,s);
        }
        cout<<ans<<endl;
    }
    return 0;
}