// https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1

#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    int ans=-1;
    int low=mat[0][0],high=mat[n-1][n-1];
        
    while(low<=high){
        int mid = low+(high-low)/2;
        int count = 0;
        for(int i=0; i<n; i++){
            count+=upper_bound(mat[i],mat[i]+n,mid) - mat[i];
        }
        if(count>=k){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}