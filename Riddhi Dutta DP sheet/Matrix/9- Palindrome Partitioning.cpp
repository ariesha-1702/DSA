// https://leetcode.com/problems/palindrome-partitioning/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    bool palindrome(string s)
    {
        int start=0,end=s.length()-1;
        while(start<end)
        {
            if(s[start]!=s[end]) return false;
            start++; end--;
        }
        return true;
    }
    
    void partition(string& s,vector<vector<string>>& res,vector<string>& v)
    {
        if(s.size()==0)
        {
            res.push_back(v); return;
        }
        for(int i=0;i<s.size();i++)
        {
            string left=s.substr(0,i+1);
            string right=s.substr(i+1);
            if(palindrome(left)) 
            {
                v.push_back(left);
                partition(right,res,v);
                v.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> v;
        partition(s,res,v);
        return res;
    }
};