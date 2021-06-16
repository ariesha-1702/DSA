// https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1

#include <bits/stdc++.h>
using namespace std;

int sb(int a[], int n, int x){
    int sum = 0, l=0;
    int answer = INT_MAX;
    
    for(int i=0;i<n;i++){
        sum += a[i];
        while(sum-a[l]>x) l++, sum-=a[l-1];
        if(sum>x) answer = min(answer, i-l+1);
    }
    
    return answer;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////

int sb(int arr[], int n, int k)
    {
        int curr=0;
        
        int ans=n+1,start=0,end=0;
        while(end<n)
        {
            while(curr<=k && end<n) 
            {
                curr+=arr[end++];
            }
            while(curr>k && start<n)
            {
                ans=min(ans,end-start);
                curr-=arr[start++];
            }
        }
        return ans;
    }

