#include <bits/stdc++.h>
using namespace std;

int findMaxValue(int mat[][],int n)
{
	int maxValue = INT_MIN;
	int temp[n][n]; // to store max from (i,j) to (n-1,n-1)

	temp[n-1][n-1] = mat[n-1][n-1];

	int maxv = mat[n-1][n-1]; 
	for(int j=n-2;j>=0;j--)
	{
		if(mat[n-1][j]>maxv) maxv=mat[n-1][j];
		temp[n-1][j]=maxv;
	}

	maxv = mat[n-1][n-1]; 
	for(int i=n-2;i>=0;i--)
	{
		if(mat[i][n-1]>maxv) maxv=mat[i][n-1];
		temp[i][n-1]=maxv;
	}

	for(int i=n-2;i>=0;i--)
	{
		for(int j=n-2;j>=0;j--)
		{
			if (temp[i+1][j+1]-mat[i][j]>maxValue)
				maxValue=temp[i+1][j+1]-mat[i][j];

			temp[i][j]=max({mat[i][j],temp[i][j+1],temp[i+1][j]});
		}
	}

	return maxValue;
}

