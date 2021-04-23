// https://leetcode.com/problems/maximum-product-subarray/submissions/
class Solution {
public:
    int maxProduct(vector<int>& v) {
        int n=v.size(); 
        int maxi=v[0],maxCurrent=v[0],minCurrent=v[0]; 
        for(int i=1;i<n;i++) { 
            int s=maxCurrent;
            maxCurrent=max({v[i], s * v[i], minCurrent * v[i]}); 
            minCurrent=min({v[i], s * v[i], minCurrent * v[i]}); 
            maxi=max({maxi,maxCurrent,minCurrent}); 
        } 
        return maxi; 
    }
};