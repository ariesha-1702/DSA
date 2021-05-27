// https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1#


#include<bits/stdc++.h>
using namespace std;

// O(n) -> time   O(n)-> space
int trappingWater(int arr[], int n){
        
        int left[n],right[n];
        left[0]=arr[0],right[n-1]=arr[n-1];
        for(int i=1;i<n;i++)
        {
            left[i]=max(left[i-1],arr[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],arr[i]);
        }
        int water=0;
        for(int i=1;i<n-1;i++)
        {
            water+=min(right[i],left[i])-arr[i];
        }
        return water;
}

// O(n)->time
int trappingWater(int arr[], int n){
        
        int left_max=arr[0],right_max=arr[n-1];
        int start=0,end=n-1;
        int water=0;
        while(start<=end)
        {
            if(left_max<=right_max)
            {
                water+=max(0,left_max-arr[start]);
                left_max=max(left_max,arr[start]);
                start++;
            }
            else if(left_max>right_max)
            {
                water+=max(0,right_max-arr[end]);
                right_max=max(right_max,arr[end]);
                end--;
            }
        }
        return water;
    }