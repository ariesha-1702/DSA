// https://leetcode.com/problems/longest-repeating-character-replacement/

class Solution {
public:
    int characterReplacement(string s, int k) {
        
        map<char,int> m;
        int total,max_freq=0;
        int l=0,r=0,ans=1;
        int n=s.size();
        
        while(r<n)
        {
            m[s[r]]++;
            total=r-l+1;
            max_freq=max(max_freq,m[s[r]]);
            while(total-max_freq>k)
            {
                if(m[s[l]]==max_freq && total-m[s[l]]<max_freq) max_freq--;
                m[s[l++]]--;
                total--;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};