// https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1#

// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <iostream>
using namespace std;


int minSwap(int *arr, int n, int k);

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        cout << minSwap(arr, n, k) << "\n";
    }
	return 0;
}
// } Driver Code Ends


int minSwap(int *arr, int n, int k) {
    
    int c=0;
    //counting total elements less than equal to k
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k) c++;
    }
    
    // number of elements needed to be swapped in current window 
    int ans,swap=0;
    for(int i=0;i<c;i++)
    {
        if(arr[i]>k) swap++;
    }
    ans=swap;
    for(int i=0,j=c;j<n;i++,j++)
    {
        if(arr[i]>k) swap--;
        if(arr[j]>k) swap++;
        ans=min(ans,swap);
    }
    return ans;
}
