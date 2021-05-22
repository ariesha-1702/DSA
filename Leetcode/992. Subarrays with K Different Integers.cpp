// https://leetcode.com/problems/subarrays-with-k-different-integers/submissions/


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int atmost_k_unique_number(vector<int>& nums, int k)
    {
        int n=nums.size();
        int ans=0;
        vector<int> freq(n+1);
        int unique=0;
        
        for(int left=0,right=0;right<n;right++)
        {
            freq[nums[right]]++; // expand the window
            
            if(freq[nums[right]] == 1) // unique element
                unique++;
            
            // contract the window
            while(unique > k) {
                
                // remove the left most element
                freq[nums[left]]--;
                
                // update unique
                if(freq[nums[left]] == 0)
                    unique--;
                
                // move the left pointer ahead
                left++;
            }
            
            ans += (right - left + 1);
         }
        return ans;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        return(atmost_k_unique_number(nums,k)-atmost_k_unique_number(nums,k-1)); 
        
    }
};