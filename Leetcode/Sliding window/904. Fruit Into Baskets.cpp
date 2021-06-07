// https://leetcode.com/problems/fruit-into-baskets/

class Solution {
public:
    int totalFruit(vector<int>& tree) {
        
        int n=tree.size();
        int l=0,r=0,unique=0;
        int ans=0;
        map<int,int> m;
        while(r<n && l<=r)
        {
            m[tree[r]]++;
            unique=m.size();
            while(unique>2)
            {
                m[tree[l]]--;
                if(m[tree[l]]==0) 
                {
                    m.erase(tree[l]);
                    unique--;
                }
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};