// https://practice.geeksforgeeks.org/problems/bbt-counter4914/1
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    const int m=1e9+7;
    long long int countBT(int h) { 
        // code here
        long long int dp[h+1];
        dp[0]=1; dp[1]=1;
        for(int i=2;i<=h;i++)
        {
            dp[i]=((dp[i-1]*dp[i-1])%m + (2*dp[i-1]*dp[i-2])%m)%m;
        }
        return dp[h];
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int h;
        cin >> h;
        Solution ob;
        cout<<ob.countBT(h)<<endl;  
    }
    return 0;
}
  