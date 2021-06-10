// https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n=nums.size();
        int x=0;
        for(int i=0;i<n;i++) 
        {
            x^=(i+1);
            x^=nums[i];
        }
        return x;
    }
};