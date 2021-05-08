// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125342/offering/1468982

#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;

int mod(long long int x){
    return ((x%M + M)%M);
}
int mul(long long int a, long long int b){
	return mod(mod(a)*mod(b));
}
int *getProductArrayExceptSelf(int *arr, int n)
{
    int *product=new int[n];
    for(int i=0;i<n;i++) product[i]=1;
    if(n==0) return product;
    if(n==1) return product;
    int prefix[n],suffix[n];
    prefix[0]=arr[0]; suffix[n-1]=arr[n-1];
    for(int i=1;i<n;i++) 
        prefix[i]=mul(prefix[i-1],arr[i]);
    for(int i=n-2;i>=0;i--) 
        suffix[i]=mul(suffix[i+1],arr[i]);
    for(int i=0;i<n;i++)
    {
        if(i==0) product[i]=suffix[i+1];
        else if(i==n-1) product[i]=prefix[i-1];
        else product[i]=mul(prefix[i-1],suffix[i+1]);
    }
    return product;
}