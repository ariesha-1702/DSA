// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125343/offering/1469003

#include<bits/stdc++.h>
using namespace std;
int minimumOperations(string &a, string &b)
{
    int n=a.size();
    int m=b.size();
    if(n!=m) return -1;
    int ans=0;
    // if n is odd then for middle character
    if(n%2!=0) ans=(a[n/2]==b[n/2])?0:1;
    
    int i=0;
    while(i<n/2)
    {
        char a1,b1,a2,b2;
        a1=a[i]; b1=a[n-i-1]; a2=b[i]; b2=b[n-i-1];
        
        if(a1==b1 && b1==a2 && a2==b2) i++;
        else if((a1==a2 && b1==b2) || (a1==b1 && a2==b2) || (a1==b2 && b1==a2)) i++;
        else if(a1==a2 || a1==b2 || b1==a2 || b1==b2 || a2==b2) ans++,i++;
        else ans+=2,i++;
    }
    return ans;
}