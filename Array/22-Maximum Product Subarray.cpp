// https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1

#include <bits/stdc++.h>
using namespace std;
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	   
        long long int maxi=arr[0],maxCurrent=arr[0],minCurrent=arr[0]; 
        for(int i=1;i<n;i++) { 
            long long int s=maxCurrent;
            maxCurrent=max({(long long)arr[i], s * arr[i], minCurrent * arr[i]}); 
            minCurrent=min({(long long)arr[i], s * arr[i], minCurrent * arr[i]}); 
            maxi=max({maxi,maxCurrent,minCurrent}); 
        } 
        return maxi; 
	}
};