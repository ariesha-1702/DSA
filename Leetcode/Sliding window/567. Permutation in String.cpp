// https://leetcode.com/problems/permutation-in-string/

class Solution {
public:
    
    bool match(int m[],int m1[])
    {
        for(int i=0;i<26;i++)
        {
            if(m[i]!=m1[i]) return false;
        }
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        
        int n=s1.size();
        int m=s2.size();
        
        if(n>m) return false;
        
        int count[26]={0},count1[26]={0};
        for(int i=0;i<n;i++)
        {
            count[s1[i]-'a']++;
            count1[s2[i]-'a']++;
        }
        for(int i=0;i<m-n;i++)
        {
            if(match(count,count1)) return true;
            int index=i+n;
            count1[s2[index]-'a']++;
            count1[s2[i]-'a']--;
        }
        return match(count,count1);
    }
};