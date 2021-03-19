// https://leetcode.com/problems/search-a-2d-matrix/submissions/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,n) for(ll i=0;i<n;i++)
#define fa(i,a,b) for(ll i=a;i<=b;i++)
#define fr(i,n) for(ll i=n-1;i>=0;i--)
#define fi first
#define se second
#define vll vector<ll>
#define mll map<ll,ll>
#define sll set<ll>
#define pll pair<ll,ll>
#define all(a) a.begin(),a.end()
#define csp(x) cout<<fixed<<setprecison(x)
#define setbits(x) __builtin_popcount(x)
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.size()==0 || matrix[0].size()==0) return false;
        
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            if(target>=matrix[i][0] && target<=matrix[i][n-1])
            {
                for(int j=0;j<n;j++)
                {
                    if(target==matrix[i][j])
                        return true;
                }
                return false;
            }
        }
        return false;
    }
};

int main() {
    return 0;
}