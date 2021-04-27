#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t,t1=1; cin>>t; while(t--)

ll int fun(ll int a,ll int b)
{
    ll int m=(min(a,b/2)-1);
    return max(m,0LL);
}

int main() {
    sync
    CASE{
        ll int m,n; cin>>m>>n;
        ll int grid[m][n];
        for(int i=0;i<m;i++) 
        {
            for(int j=0;j<n;j++)
            {
                cin>>grid[i][j];
            }
        }
        ll int left[m][n],right[m][n],up[m][n],down[m][n];
        for(int i=0;i<m;i++) 
        {
            for(int j=0;j<n;j++)
            {
                int p=j>0?left[i][j-1]:0;
                int q=i>0?up[i-1][j]:0;
                left[i][j]=(grid[i][j]==1?p+1:0);
                up[i][j]=(grid[i][j]==1?q+1:0);
            }
        }
        for(int i=m-1;i>=0;i--) 
        {
            for(int j=n-1;j>=0;j--)
            {
                int p=j<n-1?right[i][j+1]:0;
                int q=i<m-1?down[i+1][j]:0;
                right[i][j]=(grid[i][j]==1?p+1:0);
                down[i][j]=(grid[i][j]==1?q+1:0);
            }
        }
        ll int s=0;
        for(int i=0;i<m;i++) 
        {
            for(int j=0;j<n;j++)
            {
                int c=left[i][j];
                int d=right[i][j];
                int a=up[i][j];
                int b=down[i][j];
                s+=fun(a,c)+fun(a,d)+fun(c,a)+fun(d,a);
                s+=fun(b,c)+fun(b,d)+fun(c,b)+fun(d,b);
            }
        }
        cout<<"Case #"<<t1<<": "<<s<<endl; 
        t1++;
    }
    return 0;
}