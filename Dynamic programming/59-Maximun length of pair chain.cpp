//https://leetcode.com/problems/maximum-length-of-pair-chain/submissions/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    static bool compare(const vector<int>& v1,const vector<int>& v2 ) {
        return v1[0]<v2[0];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),compare);
        int n=pairs.size();
        int dp[n],ans=1;
        dp[0]=1;
        for(int i=1;i<n;i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(pairs[j][1]<pairs[i][0]) dp[i]=max(dp[i],1+dp[j]),ans=max(ans,dp[i]);
            }
        }

        return ans;
    }
};