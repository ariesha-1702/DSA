// https://practice.geeksforgeeks.org/problems/egg-dropping-puzzle-1587115620/1#
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor
    int dp[205][205];
    
    int solve(int e, int f)
    {
        if(f==0 || f==1) return f;
        
        if(e==1) return f;
        
        if(dp[e][f]!=-1) return dp[e][f];
        
        int mini=INT_MAX;
        
        for(int k=1;k<=f;k++)
        {
            // if egg breaks then solve(e-1,k-1)
            // if egg does not break solve(e,f-k)
            
            int t=max(solve(e-1,k-1),solve(e,f-k));
            
            mini=min(mini,t);
        }
        return dp[e][f]=mini+1;
    }
    
    int eggDrop(int eggs, int floors) 
    {
       memset(dp,-1,sizeof(dp));
       return solve(eggs,floors);
    }
};

int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}