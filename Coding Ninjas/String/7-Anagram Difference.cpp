// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125343/offering/1469002

#include<bits/stdc++.h>
using namespace std;
int getMinimumAnagramDifference(string &str1, string &str2)
{
     int freq[26];
     memset(freq, 0, sizeof(freq));
     for (auto x : str1) freq[x - 'a']++;
     for (auto x : str2) freq[x - 'a']--;
     int ans = 0;
     for (int i = 0; i < 26; i++){
     	ans += abs(freq[i]);
     }
     return ans/2;
}