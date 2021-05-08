// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125342/offering/1468965

#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    long long int max_sum=INT_MIN,max_sum1=0;
    for(long long int i=0;i<n;i++)
    {
        max_sum1+=arr[i];
        if(max_sum<max_sum1) max_sum=max_sum1;
        if(max_sum1<0) max_sum1=0;
    }
    return max_sum<0?0:max_sum;
}