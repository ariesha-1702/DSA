// https://leetcode.com/problems/arithmetic-slices/submissions/
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int l=nums.size();
        int dp[l];  
        int sum=0;
        for(int i=0;i<l;i++)
        {
            if(i<2)
            {
                dp[i]=0; continue;
            }
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])
            {
                dp[i]=1+dp[i-1];
                sum+=dp[i];
            }
            else dp[i]=0;
        }
        return sum;
    }
};