#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        int dp[n+1][m+1];
        int res=0;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 || j==0){ dp[i][j]=0; continue; }
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                    res=max(res,dp[i][j]);
                }
                else dp[i][j]=0;
            }
        }
        return res;
    }
};


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
