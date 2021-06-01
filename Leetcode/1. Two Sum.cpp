// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            int x=target-nums[i];
            if(m.find(x)!=m.end()) 
            {
                v.push_back(i);
                v.push_back(m[x]);
                break;
            }
            m[nums[i]]=i;
        }
        return v;
    }
};