# [1456. Maximum Number of Vowels in a Substring of Given Length] https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/?envType=study-plan-v2&envId=leetcode-75

``` c++
// Time Complexity :: Space Complexity
// O(n) :: O(1)
class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.length(), maxVowels=0, currVowels=0, left=0;

        for(int right=0; right<s.length(); right++) {
            if(isVowel(s[right])) currVowels++;

            if(right-left+1 == k) {
                maxVowels = max(maxVowels, currVowels);
                if(isVowel(s[left])) currVowels--;
                left++;
            } 
        }
        return maxVowels;
    }

    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
};
```

``` Java
```