// https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
        int temp[100001]={0};
        for(int i=0;i<n;i++) temp[arr[i]]=1;
        int max_l=0;
        for(int i=0;i<100001;i++)
        {
            if(temp[i]==1)
            {
                int l=1;
                i++;
                while(i<100001 && temp[i]) l++,i++;
                max_l=max(l,max_l);
            }
        }
        return max_l;
    }
};