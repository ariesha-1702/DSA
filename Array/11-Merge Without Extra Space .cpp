// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1

#include <bits/stdc++.h>
using namespace std;

// O(m*n)
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    
	    for(int i=0;i<n;i++)
        {
            if(arr1[i]>arr2[0])
            {
                swap(arr1[i],arr2[0]);
                int first=arr2[0];
                int k;
                for(k=1;k<m && arr2[k]<first;k++) {
                    arr2[k-1] = arr2[k];
                }
                arr2[k-1] = first;
            }
        }
	    
	}
};

// O((n+m)*log(m+n))
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    
	    int i=0,j=0,k=n-1;
        while(i<=k and j<m) {
            if (arr1[i]<arr2[j])
                i++;
            else {
                swap(arr2[j++],arr1[k--]);
            }
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
	}
};

