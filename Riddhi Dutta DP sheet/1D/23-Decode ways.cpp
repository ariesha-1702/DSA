// https://leetcode.com/problems/decode-ways/submissions/
class Solution {
public:
    int numDecodings(string s) {
        int dp[s.size()+1];
        dp[0]=1;
        dp[1]=(s[0]=='0')?0:1;
        for(int i=2;i<s.size()+1;i++)
        {
            dp[i]=0;
            int b=stoi(s.substr(i-1,1));
            int ab=stoi(s.substr(i-2,2));
            if(b!=0) dp[i]+=dp[i-1];
            if(ab>=10 && ab<=26) dp[i]+=dp[i-2];
        }
        return dp[s.size()];
    }
};