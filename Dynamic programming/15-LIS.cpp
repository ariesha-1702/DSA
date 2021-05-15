// https://leetcode.com/problems/longest-increasing-subsequence/submissions/
// https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1#
#include<bits/stdc++.h>
using namespace std;
// Complexity O(n^2)
class Solution {
public:
    int lengthOfLIS(vector<int>& n) {
        int ans=1;
        int dp[n.size()];
        dp[0]=1;
        for(int i=1;i<n.size();i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(n[j]<n[i]) dp[i]=max(dp[i],1+dp[j]),ans=max(ans,dp[i]);
            }
        }
        return ans;
    }
};

// Complexity O(nlogn)
class Solution {
public:
    int lengthOfLIS(vector<int>& n) {
        vector<int> v;
        v.push_back(n[0]);
        for(int i=1;i<n.size();i++)
        {
            if(n[i]>v[v.size()-1]) v.push_back(n[i]);
            else 
            {
                auto x=lower_bound(v.begin(),v.end(),n[i]);
                int index=x-v.begin();
                v[index]=n[i];
            }
        }
        return v.size();
    }
};