#include <bits/stdc++.h>
#define ll long long 
#define f(i,n) for(ll int i=0;i<n;i++)
using namespace std;

int main() {
	//code
    ll int t; cin>>t;
	while(t--){
	    ll int n,m,x,c=0; cin>>n>>m;
	    ll int a[100001]={0};
	    f(i,n+m){ 
	        cin>>x; 
	        a[x]+=1; 
	        if(a[x]==1) c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}