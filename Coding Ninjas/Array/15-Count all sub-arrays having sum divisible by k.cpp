// https://leetcode.com/problems/subarray-sums-divisible-by-k/submissions/
// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125342/offering/1468983

#include<bits/stdc++.h>
using namespace std;
int subArrayCount(vector<int> arr, int k) {
    
    int n=arr.size();
    
    long long int prefix[n+1]; prefix[0]=0; 
    
    // calculating prefix sum
    for (int i=0;i<n;i++)  { 
        prefix[i+1]=prefix[i]+arr[i]; 
    }
    int count[k];
    memset(count,0,sizeof(count));
    // counting the frequency of remainders
    for(auto x: prefix)  count[(x % k + k) % k]++;

   	int ans = 0;
    // for each remainder the subarrays willl be nC2
    for(auto x: count) ans+=x*(x-1)/2;
    return ans;
}
