#include <bits/stdc++.h>
using namespace std;
  
int ways(int n)
{
    int dp[n + 1];
  
    dp[1] = 2;
    dp[2] = 3;
  
    for (int i = 3; i <= n; i++) 
        dp[i] = dp[i - 1] +dp[i - 2];
      
    return dp[n];
}