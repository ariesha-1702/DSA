// https://leetcode.com/problems/dungeon-game/submissions/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        
        int n=dungeon.size();
        int m=dungeon[0].size();
        int dp[n][m];
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                if(i==n-1 && j==m-1)    //Bottom-Right cell (Princess Cell)
                    dp[i][j] = min(0,dungeon[i][j]);
                else if(i==n-1)   //last row
                    dp[i][j] = min(0,dungeon[i][j]+dp[i][j+1]);
                else if(j==m-1)   //last column       
                    dp[i][j] = min(0,dungeon[i][j]+dp[i+1][j]);
                else
                    dp[i][j] = min(0,dungeon[i][j]+max(dp[i][j+1],dp[i+1][j]));
            }
        }
        return abs(dp[0][0])+1;
    }
};