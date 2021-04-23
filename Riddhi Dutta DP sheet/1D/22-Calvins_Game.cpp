// https://www.codechef.com/INOIPRAC/submit/INOI1301
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int backward[n],forward[n];
    forward[k-1]=0;
    if(k<n) forward[k]=a[k];
    for(int i=k+1;i<n;i++)
    {
        forward[i]=max(forward[i-1],forward[i-2])+a[i];
    }
    int maxi=INT_MIN;
    backward[0]=0; backward[1]=a[0];
    for(int i=2;i<n;i++)
    {
        backward[i]=max(backward[i-1]+a[i-1],backward[i-2]+a[i-2]);
        if(i>=k-1 && backward[i]+forward[i]>maxi) maxi=backward[i]+forward[i];
    }
    cout<<maxi<<endl;
}