// https://leetcode.com/problems/rotate-image/


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    void transpose(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    
    void reverse_row(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                swap(matrix[i][j],matrix[i][n-j-1]);
            }
        }
    }
    
    void rotate(vector<vector<int>>& matrix) {
        
        transpose(matrix);
        reverse_row(matrix);
        
    }
};