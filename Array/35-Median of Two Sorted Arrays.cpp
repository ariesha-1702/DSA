// https://leetcode.com/problems/median-of-two-sorted-arrays/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size();
        int m=nums2.size();
        if(n<=m)
        {
            int begin1 = 0, end1 = n;
            while(begin1 <= end1)
            {
                int mid1 = (begin1 + end1)/2;
                int mid2 = ((n+m+1)/2)-mid1;
                
                int max1 = (mid1 == 0)?INT_MIN:nums1[mid1-1];
                int min1 = (mid1 == n)?INT_MAX:nums1[mid1];
                int max2 = (mid2 == 0)?INT_MIN:nums2[mid2-1];
                int min2 = (mid2 == m)?INT_MAX:nums2[mid2];
                
                if(max1 <= min2 && max2 <= min1)
                {
                    if((n+m)%2 == 0)
                        return ((double)(max(max1,max2)+min(min1,min2))/2);
                    else
                        return (double)max(max1,max2);
                }
                else if(max1 > min2)
                    end1 = mid1-1;
                else
                    begin1 = mid1+1;
                
            }
        }
        else 
        {
            return findMedianSortedArrays(nums2,nums1);
        }
    
            return 0;
    }
};