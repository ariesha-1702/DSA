// https://leetcode.com/submissions/detail/477947267/
class Solution {
public:
    int dp[31];
    
    void precalc()
    {
        dp[0]=0; dp[1]=1;
        for(int i=2;i<=30;i++) dp[i]=dp[i-1]+dp[i-2];
    }
   
    int fib(int n) {
        precalc();
        return dp[n];
    }
};