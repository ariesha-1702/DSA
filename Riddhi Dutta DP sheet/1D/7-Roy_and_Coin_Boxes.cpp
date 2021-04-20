// https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/roy-and-coin-boxes-1/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll int n,m,a,b; cin>>n>>m;
	ll int box[n+2]={0};
	for(ll int i=0;i<m;i++)
	{
		cin>>a>>b;
		box[a]++;
		box[b+1]--;
	} 
	for(ll int i=1;i<n+2;i++) box[i]+=box[i-1];
    ll int freq[n+1]={0};
	for(ll int i=0;i<n+1;i++) freq[box[i]]++;
	for(ll int i=n-1;i>=0;i--) freq[i] += freq[i+1];
	ll int q; cin>>q;
	for(ll int i=0;i<q;i++)
	{
		cin>>a;
		cout<<freq[a]<<endl;
	}
    return 0;
}