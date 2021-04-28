// https://practice.geeksforgeeks.org/problems/path-in-matrix3805/1#

#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    int maximumPath(int n, vector<vector<int>> m)
    {
        int maxi=INT_MIN;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                // all 3 ways are possible
                if(j>0 && j<n-1)
                    m[i][j]+=max({m[i-1][j],m[i-1][j-1],m[i-1][j+1]});
                // right diagonal not possible
                else if(j<n-1) 
                    m[i][j]+=max(m[i-1][j],m[i-1][j+1]);
                // left diagonal not possible
                else 
                     m[i][j]+=max(m[i-1][j],m[i-1][j-1]);
            }
        }
        for(int i=0;i<n;i++) maxi=max(maxi,m[n-1][i]);
        return maxi;
            
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}  