// https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,n) for(ll i=0;i<n;i++)
#define fa(i,a,b) for(ll i=a;i<=b;i++)
#define fr(i,a,b) for(ll i=a;i>=b;i--)
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

class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> v;
        int start_row=0,end_row=r-1,start_col=0,end_col=c-1;
        while(start_row<=end_row && start_col<=end_col){
            fa(i,start_col,end_col) v.push_back(matrix[start_row][i]);
            start_row++;
            fa(i,start_row,end_row) v.push_back(matrix[i][end_col]);
            end_col--;
            if(start_row<=end_row)
            fr(i,end_col,start_col) v.push_back(matrix[end_row][i]);
            end_row--;
            if(start_col<=end_col)
            fr(i,end_row,start_row) v.push_back(matrix[i][start_col]);
            start_col++;
        }
        return v;
    }
};

int main() {
    return 0;
}