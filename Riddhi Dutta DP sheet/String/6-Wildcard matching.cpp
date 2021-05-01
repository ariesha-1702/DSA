// https://leetcode.com/problems/wildcard-matching/submissions/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool dp[2005][2005];
    
    bool isMatch(string s, string p1) {
        
        string p=""; int flag=1;
        int m=s.size();
        int n1=p1.size();
        
        // Removing consecutive '*'
        for(int i=0;i<n1;i++)
        {
            if(p1[i]=='*')
            { 
                if(flag)
                {
                    p+=p1[i]; flag=0;
                }
            }
            else { p+=p1[i]; flag=1; }
        }
        
        int n=p.size();
        memset(dp,false,sizeof(dp));
        
        for(int i=0;i<=m;i++) // representing string
        {
            for(int j=0;j<=n;j++) // representing pattern
            {
                if(i==0 && j==0) // both string and pattern is empty
                {
                    dp[i][j]=true; continue;
                }
                if(i==0 || j==0) // Either string or pattern is empty
                {
                    dp[i][j]=false; 
                    if(p[0]=='*' && i==0 && j==1) dp[i][j]=true; // If first character is '*'
                    continue;
                }
                if(s[i-1]==p[j-1] || p[j-1]=='?') 
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else if(p[j-1]=='*') 
                {
                    // dp[i-1][j] --> considering ith character of string in *
                    // dp[i][j-1] --> considering * as empty for ith character
                    dp[i][j]=dp[i-1][j] || dp[i][j-1];
                }
            }
        }
        return dp[m][n];
    }
};