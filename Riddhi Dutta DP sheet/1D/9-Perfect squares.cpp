// https://leetcode.com/problems/perfect-squares/submissions/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSquares(int n) {
        int dp[n+1];
        for(int i=0;i<n+1;i++)
        {
            if(i<4){ dp[i]=i; continue; }
            dp[i]=i;
            for(int j=1;j<i;j++)
            {
                int sq=j*j;
                if(sq>i) break;
                else dp[i]=min(dp[i],1+dp[i-sq]);
            }
        }
        return dp[n];
    }
};