#include<bits/stdc++.h>
using namespace std;

bool ispar(string s)
{
    int l=s.length();
    int a[l],top=-1;
    for(int i=0;i<l;i++)
    {
       if(s[i]=='(' || s[i]=='{' || s[i]=='[')
       {
           top++;
           a[top]=s[i];
       }
       else if(s[i]==')' || s[i]=='}' || s[i]==']')
       {
           if(top==-1) return false;
           else if((a[top]=='(' && s[i]==')') || (a[top]=='{' && s[i]=='}') || (a[top]=='[' && s[i]==']'))
           top--;
           else return false;
       }
    }
    if(top!=-1) return false;
    return true;
}