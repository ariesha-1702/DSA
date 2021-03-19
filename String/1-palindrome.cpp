// https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    // Your code goes here
	    int start=0;
        int end=S.size()-1;
        char temp;
        while(start<end)
        {
            if(S[start]!=S[end]) return 0;
            start++; end--;
        }
        return 1;
	}

};