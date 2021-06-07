// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.size();
        int l=0,r=0,unique=0;
        int ans=0;
        unordered_map<int,int> m;
        while(r<n)
        {
            m[s[r]]++;
            unique=m.size();
            while(unique!=r-l+1)
            {
                m[s[l]]--;
                if(m[s[l]]==0) 
                {
                    m.erase(s[l]);
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