//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/submissions/
/* 
               ----------------------------    |     ---------------------------
               ----------------------------    |     ---------------------------
               Dynamic programming approach    |     Divide and Conquer approach
               ----------------------------    |     ---------------------------
               ----------------------------    |     ---------------------------
                    State Transitions          | -> Divide array into 2 parts and 
           (i-1)th day-------------->ith day   |    calculate max profit on both side
           1.Bought                  sell      | 
                                     skip
                                     
           2.No state                bought
                                     skip
                                     
           3.Sell                    bought
                                     skip
                                     
           STATES-{1.Bought or not
                   2.Transactions
                   3.Stock days}                          
*/

/////////////////////////////////// DIVIDE AND CONQUER APPROACH /////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==0) return 0;
        vector<int> left(n),right(n);
        
        //Fill 1st transaction (LEFT)
        int leftMin = prices[0];
        for(int i=1;i<n;i++)
        {
            left[i] = max(left[i-1],prices[i]-leftMin);
            leftMin = min(leftMin,prices[i]);
        }
        
        //Fill 2nd transaction (RIGHT)
        int rightMax = prices[n-1];
        for(int i=n-2;i>=0;i--)
        {
            right[i] = max(right[i+1],rightMax-prices[i]);
            rightMax = max(rightMax,prices[i]);
        }
        
        //Find the max-profit value
        int profit = right[0];
        for(int i=1;i<n;++i)
            profit = max(profit,left[i-1]+right[i]);
        
        return profit;
    }
};

///////////////////////////////////////// Memoization //////////////////////////////////////////////////
class Solution {
public:
    /*  States- 
        pos->current position
        t->transactions done
        bought->If current stock is bought
    */
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
    int maxProfit(vector<int>& prices) {
        dp.resize(2,vector<vector<int>>(3,vector<int>(prices.size(),-1)));
        int res = stock(prices,0,2,false);
        return res;
    }
};