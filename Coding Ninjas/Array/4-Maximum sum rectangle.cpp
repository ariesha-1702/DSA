// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125342/offering/1468968

#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n){
        int max_sum=-10000001,max_sum1=0;
        for(int i=0;i<n;i++)
        {
            max_sum1+=arr[i];
            if(max_sum<max_sum1) max_sum=max_sum1;
            if(max_sum1<0) max_sum1=0;
        }
        return max_sum;
    }  

int maxSumRectangle(vector<vector<int>>& m, int r, int c)
{
	int t[r],result=INT_MIN;
        for(int left=0;left<c;left++)
        {
            for(int i=0;i<r;i++) t[i]=0;
            
            for(int right=left;right<c;right++)
            {
                for(int i=0;i<r;i++) t[i]+=m[i][right];
                
                int maxsum=kadane(t,r);
                
                result=max(result,maxsum);
            }
        }
        return result;
}
