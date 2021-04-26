// https://leetcode.com/problems/jump-game-ii/submissions/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n==0 || n==1) return 0;
        if(n==2) return 1;
        int dp[n+1];
        dp[0]=dp[1]=0;
        dp[2]=1;
        for(int i=3;i<=n;i++)
        {
            dp[i]=1000000;
            for(int j=1;j<i;j++)
            {
                if(nums[j-1]>=(i-j)) dp[i]=min(1+dp[j],dp[i]);
            }
        }
        return dp[n];
    }
};