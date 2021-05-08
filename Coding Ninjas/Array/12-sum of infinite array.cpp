// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125342/offering/1468980

#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;

long long mod(long long x){
    return ((x%M + M)%M);
}
long long add(long long a, long long b){
	return mod(mod(a)+mod(b));
}
long long sub(long long a, long long b){
	return mod(mod(a)-mod(b));
}
long long int mul(long long a, long long b){
	return mod(mod(a)*mod(b));
}

int solve(vector<int> &arr, long long int range, int n)
{
    long long int x=range/n;
    long long int y=range%n;
    return add(mul(x,arr[n-1]),arr[y-1]);
}

vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
    vector<int> v;
    long long int l,r;
    for(long long int i=1;i<n;i++)
    {
        arr[i]=add(arr[i],arr[i-1]);
    }
    for(auto k:queries)
    {
        l=k[0]; r=k[1];
		if(l==1) 
        {
            int y=solve(arr,r,n);
            v.push_back(y);
        }
        else
        {
            l--;
            int x=solve(arr,l,n);
            int y=solve(arr,r,n);
            v.push_back(sub(y,x));
        }
    }
    return v;
}