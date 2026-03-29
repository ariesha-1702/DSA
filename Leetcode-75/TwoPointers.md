# [11. Container With Most Water] https://leetcode.com/problems/container-with-most-water/description/?envType=study-plan-v2&envId=leetcode-75

``` c++
// Time Complexity :: Space Complexity
// O(n) :: O(1)
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n-1, maxWater=0;

        while(left<right) {
            int water = min(height[left], height[right]) * (right-left);
            maxWater = max(maxWater, water);

            if(height[left] >= height[right]) right--;
            else left++;
        }
        return maxWater;
    }
};
```

``` Java
```