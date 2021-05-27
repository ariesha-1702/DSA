// https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int n, vector<vector<int>> mat) {
        
        vector<int> v;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                v.push_back(mat[i][j]);
        sort(v.begin(),v.end());            
        int a=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                mat[i][j]=v[a++];
        return mat;
    }
};
