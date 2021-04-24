// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1
#include<bits/stdc++.h>
using namespace std;
int knapSack(int w, int wt[], int val[], int n) 
{ 
   int precalc[n+1][w+1];
   for(int i=0;i<=n;i++)
   {
       for(int j=0;j<=w;j++)
       {
           if(i==0 || j==0) precalc[i][j]=0;
           else if(wt[i-1]>j) precalc[i][j]=precalc[i-1][j];
           else precalc[i][j]=max(precalc[i-1][j],val[i-1]+precalc[i-1][j-wt[i-1]]);
       }
   }
   return precalc[n][w];
}