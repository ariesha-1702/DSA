// https://leetcode.com/problems/furthest-building-you-can-reach/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n=heights.size();
        priority_queue<int,vector<int>,greater<int>> q;
        int i=1,diff;
        while(i<=n-1 && q.size()<ladders)
        {
            diff=heights[i]-heights[i-1];
            if(diff>0) q.push(diff);
            i++;
        }
        while(i<=n-1)
        {
            diff=heights[i]-heights[i-1];
            if(diff<=0) { i++; continue; }
            if(!q.empty() && q.top()<diff && bricks>=q.top())
            {
                bricks-=q.top();
                q.pop(); q.push(diff); i++;
            }
            else if(bricks>=diff)
                bricks-=diff,i++;
            else return i-1;
        }
        return i-1;
    }
};