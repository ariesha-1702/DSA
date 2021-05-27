// https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_map<int,int> m;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            cout<<m[sum]<<endl;
            if(sum==0 || m[sum]) return true;
            m[sum]++;
        }
        return false;
    }
};
