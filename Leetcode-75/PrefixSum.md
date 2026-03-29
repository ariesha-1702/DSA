# [1732. Find the Highest Altitude] https://leetcode.com/problems/find-the-highest-altitude/?envType=study-plan-v2&envId=leetcode-75

``` c++
// Time Complexity :: Space Complexity
// O(n) :: O(1)
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int largestAltitude = 0, currAltitude = 0;

        for(int i=0; i<gain.size(); i++) {
            currAltitude += gain[i];
            largestAltitude = max(largestAltitude, currAltitude);
        }
        return largestAltitude;
    }
};
```

``` Java
```