// https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/#

#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:

    bool isSubsetSum(int n, int a[], int sum) 
    { 
    	bool dp[n+1][sum+1]; 
    
    	for (int i = 0; i <= n; i++) dp[i][0] = true; 

    	for (int i = 1; i <= sum; i++) dp[0][i] = false; 

    	for (int i = 1; i <= n; i++) 
    	{ 
        	for (int j = 1; j <= sum; j++) 
        	{   // j=current sum and a[i-1]=current element
                // current element>sum 
        		if(j<a[i-1]) 
        		dp[i][j] = dp[i-1][j]; 
        		if (j >= a[i-1]) 
        		dp[i][j] = dp[i-1][j] || dp[i - 1][j-a[i-1]]; 
        	} 
    	} 
    
    	return dp[n][sum]; 
    } 
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
  