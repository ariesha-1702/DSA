#include <bits/stdc++.h>
#define ll long long 
#define f(i,n) for(ll int i=0;i<n;i++)
using namespace std;

int main() {
	//code
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    int a[n];
	    f(i,n){
	        cin>>a[i];
	    }
	    cout<<a[n-1]<<" ";
	    f(i,n-1) cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}