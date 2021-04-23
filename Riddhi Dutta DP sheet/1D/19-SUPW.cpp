// https://www.codechef.com/ZCOPRAC/submit/ZCO14002
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n]; 
    for(int i=0;i<n;i++) cin>>a[i];
    if(n==1) cout<<a[0]<<endl;
    else if(n==2) cout<<min(a[0],a[1])<<endl;
    else if(n==3) cout<<min({a[0],a[1],a[2]})<<endl;
    else{
        for(int i=3;i<n;i++)
        {
            a[i]=min({a[i-1],a[i-2],a[i-3]})+a[i];
        }
        cout<<min({a[n-1],a[n-2],a[n-3]})<<endl;
    } 
}