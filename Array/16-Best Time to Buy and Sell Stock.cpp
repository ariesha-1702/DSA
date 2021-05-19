// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int l=prices.size();
        if(l<=1) return 0;
        int profit=0,SP=prices[l-1];
        for(int i=l-2;i>=0;i--)
        {
            profit=max(profit,SP-prices[i]);
            SP=max(SP,prices[i]);
        }
        return profit;
    }
};