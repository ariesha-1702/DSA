// https://practice.geeksforgeeks.org/problems/longest-bitonic-subsequence0824/1
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int LongestBitonicSequence(vector<int>n)
	{
	    int ans=1;
        int dp[n.size()],dp1[n.size()];
        // finding LIS in from left to right
        dp[0]=1;
        for(int i=1;i<n.size();i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(n[j]<n[i]) dp[i]=max(dp[i],1+dp[j]);
            }
        }
        dp1[0]=1;
        for(int i=n.size()-1;i>=0;i--)
        {
            dp1[i]=1;
            for(int j=n.size()-1;j>i;j--)
            {
                if(n[j]<n[i]) dp1[i]=max(dp1[i],1+dp1[j]);
            }
        }
        for(int i=0;i<n.size();i++)
        {
            ans=max(ans,dp[i]+dp1[i]-1);
        }
        return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends