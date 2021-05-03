// https://leetcode.com/problems/triangle/submissions/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n=triangle.size();
        
        if(n==1) return triangle[0][0];
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                if(j==i) triangle[i][j]+=triangle[i-1][j-1];
                else if(j==0) triangle[i][j]+=triangle[i-1][j];
                else triangle[i][j]+=min(triangle[i-1][j-1],triangle[i-1][j]);
            }
        }
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            mini=min(mini,triangle[n-1][i]);
        }
        return mini;
    }
};