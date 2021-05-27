// https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1#

// O(n^2)
#include <bits/stdc++.h>
using namespace std;
bool find3Numbers(int a[], int n, int x)
{
    sort(a,a+n);
    int curr_sum;
    for(int i=0;i<n-2;i++) // to have atleast 3 elements in current window
    {
        curr_sum=x-a[i];
        int j=i+1,k=n-1;
        while(j<k)
        {
            if(curr_sum==a[k]+a[j]) return true;
            else if(curr_sum<a[k]+a[j]) k--;
            else if(curr_sum>a[k]+a[j]) j++;
        }
    }
    return false;
}