// https://leetcode.com/problems/next-permutation/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& v) {
        
        int n=v.size(),i;
        
        // finding first decreasing element
        for(i=n-2;i>=0;i--)
        {
            if(v[i]<v[i+1])
            break;
        }

        if(i<0)
            reverse(v.begin(),v.end());
        else
        {
            int j;
            // finding number just larger than v[i]
            for(j=n-1;j>i;j--)
            {
                if(v[j]>v[i])
                    break;
            }
            swap(v[j],v[i]);
            reverse(v.begin()+i+1,v.end()); // making smallest possible permutation with remaining elements
        }
        return;
        
    }
};