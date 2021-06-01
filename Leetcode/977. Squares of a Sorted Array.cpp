// https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> v;
        int negative=-1,positive=nums.size(),i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]<0) negative=i;
            else 
            {
                positive=i;
                break;
            }
        }
        while(negative>=0 && positive<=nums.size()-1)
        {
            if(nums[positive]<=abs(nums[negative]))
            {
                v.push_back(nums[positive]*nums[positive]);
                positive++;
            }
            else
            {
                v.push_back(nums[negative]*nums[negative]);
                negative--;
            }
        }
        while(negative>=0)
        {
            v.push_back(nums[negative]*nums[negative]);
            negative--;
        }
        while(positive<=nums.size()-1)
        {
            v.push_back(nums[positive]*nums[positive]);
            positive++;
        }
        return v;
    }
};