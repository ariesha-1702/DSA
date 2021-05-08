// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125348/offering/1469131
#include<bits/stdc++.h>
using namespace std;

int maxSumTwoSubarray(int a[], int n, int k)
{
	int ans,maxi;
    for(int i=1;i<n;i++) a[i]+=a[i-1];
    maxi=a[k-1],ans=a[k+k-1];
    for(int i=k+k;i<n;i++)
    {
        maxi=max(maxi,a[i-k]-a[i-(k+k)]);
        ans=max(ans,maxi+a[i]-a[i-k]);
    }
    return ans;
}

// for array of size l and m respectively

/* 

int maxSumTwoNoOverlap(vector<int>& A, int L, int M) {
        int n = A.size();
        for(int i = 1; i < n; i++)
            A[i] += A[i-1];
        int res = A[L+M-1], lMax = A[L-1], mMax = A[M-1];
        for(int i = L+M; i < n; i++){
            lMax = max(lMax, A[i-M] - A[i - (L+M)]);
            mMax = max(mMax, A[i-L] - A[i - (L+M)]);
            res = max(res, max(lMax + A[i] - A[i-M], mMax + A[i] - A[i-L]));
        }
        return res;
    }

*/