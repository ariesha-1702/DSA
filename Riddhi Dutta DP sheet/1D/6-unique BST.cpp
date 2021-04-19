// https://leetcode.com/problems/unique-binary-search-trees/
class Solution {
public:
    int numTrees(int n) {
        int dp[n+1];
        dp[0] = dp[1] = 1;
        // same as nth catalan number
        // loop for n nodes as root node
        for (int i = 2; i <= n; i++) {
            dp[i] = 0;
            // loop for possible combination of left and right subtree
            // if ith nide is root thrn
            // 1 to i-1 numbers will be in left subtree
            // i+1 to n numbers will be in right subtree
            for (int j = 0; j < i; j++)
                dp[i] += dp[j] * dp[i-j-1];
        }
        return dp[n];
    }
};