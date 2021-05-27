// https://practice.geeksforgeeks.org/problems/find-distinct-elements2054/1

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int distinct(vector<vector<int>> m, int n)
    {
        unordered_map<int,int> map;
        int c=0;
        for(int i=0;i<n;i++)
        {
            map[m[0][i]]=1;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(map[m[i][j]] && map[m[i][j]]==i) 
                {
                    map[m[i][j]]++;
                    if(i==n-1) c++;
                }
                
            }
        }
        return c;
    }
};