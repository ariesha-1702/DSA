// https://leetcode.com/problems/minimum-size-subarray-sum/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n=nums.size();
        int l=0,r=0,sum=0,ans=n+1;
        while(r<n)
        {
            sum+=nums[r];
            while(sum>=target)
            {
                ans=min(ans,r-l+1);
                sum-=nums[l++];
            }
            r++;
        }
        return ans!=n+1?ans:0;
    }
};