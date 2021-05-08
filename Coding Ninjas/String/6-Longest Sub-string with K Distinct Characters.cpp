// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125343/offering/1469001
#include<bits/stdc++.h>
using namespace std;

int getLengthofLongestSubstring(int k, string s)
{
    if(s.size()==0 or k==0) return 0;
    int i=0,j=0,ans=0;
    map<char,int> m;
    while(j<s.size())
    {
        m[s[j]]++;
        while(m.size()>k)
        {
            if(m[s[i]]==1) m.erase(s[i]);
            else m[s[i]]--;
            i++;
        }
        ans=max(ans,j-i+1); j++;
    }
    return ans;
}
