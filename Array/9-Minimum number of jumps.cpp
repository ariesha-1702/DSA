// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1#


#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int minJumps(int arr[], int n){
        
        if(n<=1) return 0;
        if(arr[0]==0) return -1;
        
        int max_reach=arr[0],step=arr[0],jump=1;
        for(int i=1;i<n;i++)
        {
            if(i==n-1) return jump;
            max_reach=max(max_reach,i+arr[i]);
            step--;
            if(step==0)
            {
                jump++;
                if(i>=max_reach) return -1;
                step=max_reach-i;
            }
        }
        return -1;
        
    }
};