// https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int median(vector<vector<int>> &m, int r, int c){
        
        int min = INT_MAX, max = INT_MIN; 
        for (int i=0; i<r; i++) 
        { 
            // finding the minimum element by comparing 1st element of each row
            if (m[i][0] < min) 
                min = m[i][0]; 
      
            // finding the maximum element by comparing last element of each row 
            if (m[i][c-1] > max) 
                max = m[i][c-1]; 
        } 
      
        int elements_needed = (r*c+1)/2; 
        while(min<max) 
        { 
            int mid = min+(max-min)/2; 
            int count = 0; 
      
            // count of elements smaller than mid 
            for(int i=0;i<r;i++) 
                count += upper_bound(m[i].begin(),m[i].end(),mid)-m[i].begin(); 
            if(count<elements_needed) 
                min=mid+1; 
            else
                max=mid; 
        } 
        return min; 
    }
};
