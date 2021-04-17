// https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1#
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    const int M=1e9+7;

    long long mod(long long x)
    {
        return ((x%M + M)%M);
	}
	
	long long add(long long a, long long b)
	{
		return mod(mod(a)+mod(b));
	}
    
    //Function to count number of ways to reach the nth stair.
    int countWays(int m)
    {
        // your code here
        if(m<=2) return m;
        int dp[m+1];
        dp[0]=0; dp[1]=1; dp[2]=2;
        for(int i=3;i<=m;i++) dp[i]=add(dp[i-1],dp[i-2]);
        return dp[m];
    }
};

int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
  