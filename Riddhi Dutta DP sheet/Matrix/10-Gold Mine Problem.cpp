// https://practice.geeksforgeeks.org/problems/gold-mine-problem2608/1

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        int a[m][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                a[j][i]=M[i][j];
                
        int maxi=INT_MIN;
        for(int i=1;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                // all 3 ways are possible
                if(j>0 && j<n-1)
                    a[i][j]+=max({a[i-1][j],a[i-1][j-1],a[i-1][j+1]});
                // right diagonal not possible
                else if(j<n-1) 
                    a[i][j]+=max(a[i-1][j],a[i-1][j+1]);
                // left diagonal not possible
                else 
                     a[i][j]+=max(a[i-1][j],a[i-1][j-1]);
            }
        }
        for(int i=0;i<n;i++) maxi=max(maxi,a[m-1][i]);
        return maxi;        
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}  