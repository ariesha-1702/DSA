// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125342/offering/1468966

#include<bits/stdc++.h>
using namespace std;
int flipBits(int* arr, int n) 
{
	int one=0,zero=0,ans=0,c=0;
    for(int i=0;i<n;i++) if(arr[i]) c++;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0) zero++;
        else one++;
        ans=max(ans,zero-one);
        if(one>=zero) one=zero=0;
    }
    return ans+c;
}