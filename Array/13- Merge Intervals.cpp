// https://leetcode.com/problems/merge-intervals/


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            int s= ans.size()-1;
            if(ans[s][1]>=intervals[i][0])
            {
                ans[s][1] = max(intervals[i][1],ans[s][1]);
            }
            else
                ans.push_back(intervals[i]);
        }
        return ans;
        
    }
};