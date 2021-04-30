//////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// RECURSION + MEMOIZATION //////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

// https://practice.geeksforgeeks.org/problems/boolean-parenthesization5610/1#

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

    int dp[205][205][2];
    
    int solve(string s,int i,int j,int flag)
    {
        if(i>j) return false;
        
        if(i==j) 
        {
            if(flag) return s[i]=='T';
            else return s[i]=='F';
        }
        
        if(dp[i][j][flag]!=-1) return dp[i][j][flag];
        
        int ans=0;
        for(int k=i+1;k<=j;k+=2)
        {
            int lt=(dp[i][k-1][1]!=-1)?dp[i][k-1][1]:solve(s,i,k-1,1);
            int lf=(dp[i][k-1][0]!=-1)?dp[i][k-1][0]:solve(s,i,k-1,0);
            int rt=(dp[k+1][j][1]!=-1)?dp[k+1][j][1]:solve(s,k+1,j,1);
            int rf=(dp[k+1][j][0]!=-1)?dp[k+1][j][0]:solve(s,k+1,j,0);
            
            dp[i][k-1][1]=lt; dp[i][k-1][0]=lf;
            dp[k+1][j][1]=rt; dp[k+1][j][0]=rf;
            
            if(s[k]=='&')
            {
                if(flag) ans+=lt*rt;
                else ans+=lf*rf+lf*rt+lt*rf;
            }
            else if(s[k]=='|')
            {
                if(flag) ans+=lt*rt+lt*rf+lf*rt;
                else ans+=lf*rf;
            }
            else if(s[k]=='^')
            {
                if(flag) ans+=lt*rf+lf*rt;
                else ans+=lf*rf+lt*rt;
            }
            dp[i][j][flag]=ans%1003;
        }
        return ans%1003;
    }
    
    int countWays(int n, string s){
        memset(dp,-1,sizeof(dp));
        return solve(s,0,n-1,true);
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}  