// https://leetcode.com/problems/count-square-submatrices-with-all-ones/submissions/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSquares(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int res=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i>0 && j>0)
                {
                    if(mat[i][j])
                        mat[i][j]+=min({mat[i-1][j],mat[i][j-1],mat[i-1][j-1]});
                }
                res+=mat[i][j];
            }
        }
        return res;
    }
};