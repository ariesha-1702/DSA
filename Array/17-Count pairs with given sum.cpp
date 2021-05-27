// https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#

#include <bits/stdc++.h>
using namespace std;
class Solution{   
public:
    int getPairsCount(int a[], int n, int k) {
        map<int,int> count;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            count[a[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            count[a[i]]--;
            if(a[i]<=k) ans+=count[k-a[i]];
        }
        return ans;
    }
};