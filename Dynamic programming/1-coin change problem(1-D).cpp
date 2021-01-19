#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
  public:
    ll int count( int coins[], int n, int amt )
    {
       if(n==0 && amt==0) return 1;
       if(n==0 && amt!=0) return 0;
       ll int precalc[amt+1];
       memset(precalc,0,sizeof(precalc));
       precalc[0]=1;
       for(ll int i=0;i<n;i++)
       {
           for(ll int j=coins[i];j<=amt;j++)
           {
               precalc[j]+=precalc[j-coins[i]];
           }
       }
       return precalc[amt];
    }
};