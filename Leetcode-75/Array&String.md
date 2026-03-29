# [1071. Greatest Common Divisor of Strings] https://leetcode.com/problems/greatest-common-divisor-of-strings/description/?envType=study-plan-v2&envId=leetcode-75

``` c++
// Time Complexity :: Space Complexity
// O(n log(min(n,m))) → worst-case O(n²) :: O(n)
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n = str1.length();
        int m = str2.length();

        if(m > n) swap(str1, str2);

        string reminderStr = reminderStrIndex(str1, str2);

        while(reminderStr != str2) {
            str1 = str2;
            str2 = reminderStr;
            reminderStr = reminderStrIndex(str1, str2);
        }
        return str2;
    }

    string reminderStrIndex(string str1, string str2) {
        int l1=0, l2=0;
        int n = str1.length();
        int m = str2.length();

        while(l1<n && l2<m) {
            if(str1[l1] != str2[l2]) return "";
            l1++;
            l2++;

            if(l1<n && l2==m) l2=0;
        }

        if(l2==m) return str2;

        return str2.substr(l2);
    }
};
```

``` Java
```