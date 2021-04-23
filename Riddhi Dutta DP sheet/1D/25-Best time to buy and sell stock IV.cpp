// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/submissions/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<vector<int>>> dp;
    int stock(vector<int>& prices,int pos,int t,bool bought)
    {
        if(pos>=prices.size() || t==0)      //Out of bounds case
            return 0;
        if(dp[bought][t][pos]!=-1)     //Return if already calculated
            return dp[bought][t][pos];
        
        //3 choices for a position-->Buy/Sell/Skip
        int result = stock(prices,pos+1,t,bought);    //SKIP
        if(bought)
            result = max(result,stock(prices,pos+1,t-1,false)+prices[pos]);   //SELL
        else
            result = max(result,stock(prices,pos+1,t,true)-prices[pos]);    //BUY
        
        dp[bought][t][pos] = result;
        return result;
    }
    int maxProfit(int k,vector<int>& prices) {
        dp.resize(2,vector<vector<int>>(k+1,vector<int>(prices.size(),-1)));
        int res = stock(prices,0,k,false);
        return res;
    }
};