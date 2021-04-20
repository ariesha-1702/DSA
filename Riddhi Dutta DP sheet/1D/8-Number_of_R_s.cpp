// https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/number-of-rs-1/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int main() {
    sync
    CASE{
        string s; cin>>s;
        ll int l=s.size(),c=0;
        ll int a[l],res=INT_MIN,sum=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='R') a[i]=-1,c++;
            else a[i]=1;
        } 
        for(int i=0;i<l;i++)
        {
            sum+=a[i];
            res=max(sum,res);
            sum=sum<0?0:sum;
        }
        cout<<c+res<<endl;
    }
    return 0;
}