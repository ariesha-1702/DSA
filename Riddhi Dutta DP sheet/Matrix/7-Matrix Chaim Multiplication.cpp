
///////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// RECURSIVE APPROACH ///////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
int solve(int a[],int i,int j)
    {
        if(i>=j) return 0;
        int mini=INT_MAX;
        for(int k=i;k<j;k++)
        {
            int temp=solve(a,i,k)+solve(a,k+1,j)+(a[i-1]*a[k]*a[j]);
            mini=min(mini,temp);
        }
        return mini;
    }

int matrixMultiplication(int n, int arr[])
    {
        return solve(arr,1,n-1);
    } 


///////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// MEMOIZATION //////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

// https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1#

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

    int dp[505][505];

    int solve(int a[],int i,int j)
    {
        if(i>=j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int mini=INT_MAX;
        for(int k=i;k<j;k++)
        {
            int t1=solve(a,i,k);
            int t2=solve(a,k+1,j);
            dp[i][k]=t1; dp[k+1][j]=t2;
            int temp=t1+t2+(a[i-1]*a[k]*a[j]);
            mini=min(mini,temp);
        }
        return mini;
    }

    int matrixMultiplication(int n, int arr[])
    {
        memset(dp,-1,sizeof(dp));
        return solve(arr,1,n-1);
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
} 