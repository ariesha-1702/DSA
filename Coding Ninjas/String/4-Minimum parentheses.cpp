// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125343/offering/1468999

#include<bits/stdc++.h>
using namespace std;

int minimumParentheses(string pattern) {
    int c=0,open=0;
    for(auto k:pattern)
    {
        if(k=='(') open++;
        else if(k==')')
        {
            if(open>0) open--;
            else c++;
        }
    }
    return c+open;
}