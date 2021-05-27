// https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    
        sort(a.begin(),a.end());
        long long int diff=10000000000;
        long long int start=0,end=m-1;
        while(end<n)
        {
            diff=min(diff,a[end]-a[start]);
            start++; end++;
        }
        return diff;
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends