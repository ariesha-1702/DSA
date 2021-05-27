// https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1#

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int rowWithMax1s(vector<vector<int>> arr, int n, int m) {
	    
	    int curr_col=-2,row=-1;
	    for(int i=0;i<m;i++)
	    {
	        if(arr[0][i]==1)
	        {
	            curr_col=i-1;
	            row=0; break;
	        }
	    }
	    if(curr_col==-2) curr_col=m-1; // 1 not found in row-1
	    for(int i=1;i<n;i++)
	    {
	        while(curr_col>=0 && arr[i][curr_col]==1)
	        {
	            curr_col--; row=i;
	        }
	    }
	    return row;
	}

};

