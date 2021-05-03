// https://www.hackerrank.com/challenges/abbr/problem

#include<bits/stdc++.h>
using namespace std;

string abbreviation(string s1, string s2) {
    
    int n=s1.size();
    int m=s2.size();
    int c=0;

    bool dp[n+1][m+1];
    memset(dp,false,sizeof(dp));

    // intialising first column
    for(int i=0;i<=n;i++)
    {
        if(i==0) { dp[i][0]=true; continue; } // Both string empty
        if(islower(s1[i-1])) dp[i][0]=true; // if lowercase character then true
        else dp[i][0]=false;                // else false
    }

    //initialising first row
    for(int j=1;j<=m;j++)
    {
        dp[0][j]=false;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            bool flag=isupper(s1[i-1]);
            if(s1[i-1]==s2[j-1]) // uppercase and equal
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else if(toupper(s1[i-1])==s2[j-1]) // lowercase(converting to uppercase) and equal
            {
                // dp[i-1][j] ---> removing the character or
                // dp[i-1][j-1] ---> taking the character
                dp[i][j]=dp[i-1][j-1] || dp[i-1][j];
            }
            else if(flag) // uppercase and not equal
            {
                dp[i][j]=false;
            }
            else // lowercase and not equal
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    return dp[n][m]?"YES":"NO";
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s1,s2; cin>>s1>>s2;
        cout<<abbreviation(s1,s2)<<endl;
    }
}