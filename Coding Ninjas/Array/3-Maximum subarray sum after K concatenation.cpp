// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125342/offering/1468967

#include<bits/stdc++.h>
using namespace std;
long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{
	long long int max_sum=INT_MIN,max_sum1=0;
    while(k--)
    {
        for(long long int i=0;i<n;i++)
        {
            max_sum1+=arr[i];
            if(max_sum<max_sum1) max_sum=max_sum1;
            if(max_sum1<0) max_sum1=0;
        }
    }
    return max_sum;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

// https://leetcode.com/problems/k-concatenation-maximum-sum/submissions/
class Solution {
public:
    
    int kadane(vector<int>& arr, int k) {
        
        int n=arr.size();
        int max_sum=INT_MIN,max_sum1=0;
        while(k--)
        {
            for(long long int i=0;i<n;i++)
            {
                max_sum1+=arr[i];
                if(max_sum<max_sum1) max_sum=max_sum1;
                if(max_sum1<0) max_sum1=0;
            }
        }
        return max_sum<0?0:max_sum;
    }
    
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        
        const int m=1e9+7;
        
        long int sum1=kadane(arr,1);
        if(k==1) return sum1%m;
        
        long int sum2=kadane(arr,2);
        if(k==2) return max(sum1,sum2)%m;
        
        long int total_sum=accumulate(arr.begin(),arr.end(),0);
        
        
        long int sum3=(sum2+total_sum*(k-2));
        
        return max({sum1,sum2,sum3})%m;
        
    }
};