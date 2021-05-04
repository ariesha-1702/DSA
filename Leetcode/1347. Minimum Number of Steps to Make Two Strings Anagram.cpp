// https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        int freq[26];
        memset(freq, 0, sizeof(freq));
        for (auto x : s) freq[x - 'a']++;
        for (auto x : t) freq[x - 'a']--;
        int ans = 0;
        for (int i = 0; i < 26; i++){
            ans += abs(freq[i]);
        }
        return ans/2;
    }
};