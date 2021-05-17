// https://practice.geeksforgeeks.org/problems/mobile-numeric-keypad5456/1#

#include <bits/stdc++.h>
using namespace std;

class Solution{


	public:
	
	long long int dp[10][50];
	
	long long int m[4][3]={{1,2,3},{4,5,6},{7,8,9},{-1,0,-1}};
	
	long long int solve(int i, int j, int n)
	{
	    if(n==1) return 1;
	    if(dp[m[i][j]][n]!=-1) return dp[m[i][j]][n];
	    
	    long long int a,b=0,c=0,d=0,e=0;
	    
	    //total 5 cases
	    
	    a=solve(i,j,n-1); // remaining on same element
	    if(j-1>=0 && m[i][j-1]!=-1) b=solve(i,j-1,n-1); // left
	    if(j+1<3 && m[i][j+1]!=-1) c=solve(i,j+1,n-1);  // right
	    if(i-1>=0 && m[i-1][j]!=-1) d=solve(i-1,j,n-1); // down
	    if(i+1<4 && m[i+1][j]!=-1) e=solve(i+1,j,n-1);  // up
	    
	    return dp[m[i][j]][n]=a+b+c+d+e;
	}
	
	long long getCount(int n)
	{
		dp[10][n+1];
		memset(dp,-1,sizeof(dp));
		long long int ans=0;
		for(int i=0;i<4;i++)
		{
		    for(int j=0;j<3;j++)
		    {
		        if(m[i][j]!=-1) ans+=solve(i,j,n);
		    }
		}
		
		return ans;
	}


};

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

       

	    Solution ob;
	    cout << ob.getCount(n) << "\n";
	     
    }
    return 0;
}
  