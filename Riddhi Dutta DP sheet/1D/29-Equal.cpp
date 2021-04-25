// https://www.hackerrank.com/challenges/equal/problem

#include<bits/stdc++.h>
using namespace std;
int equal(vector<int> arr) {

    // Store all the possibilities from min to min-4 as maximum we can take 5 chocolates
    int possibilities[5]={0},mini=INT_MAX,res=INT_MAX;

    for(auto k:arr) mini=min(mini,k);

    for (int i = 0; i < 5; i++) {

      for (auto k : arr) {
        int diff = k - mini;
        // caculating no. of steps to make that element equal
        int count = diff / 5 + (diff % 5) / 2 + ((diff % 5) % 2) / 1;
        possibilities[i] += count;
      }
      mini--;
    }

    // Return the minimum number out of all the possibilities
    for(auto k:possibilities) res=min(res,k);
    
    return res;
}