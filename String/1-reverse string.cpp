// https://leetcode.com/problems/reverse-string/submissions/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;
        int end=s.size()-1;
        char temp;
        while(start<end)
        {
            temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++; end--;
        }
    }
};

int main() {
    return 0;
}