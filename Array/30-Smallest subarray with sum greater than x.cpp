// https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1

// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:

    int sb(int arr[], int n, int k)
    {
        int curr=0;
        
        int ans=n+1,start=0,end=0;
        while(end<n)
        {
            while(curr<=k && end<n) 
            {
                curr+=arr[end++];
            }
            while(curr>k && start<n)
            {
                ans=min(ans,end-start);
                curr-=arr[start++];
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.sb(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends