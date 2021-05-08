// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125343/offering/1468997

#include<bits/stdc++.h>
using namespace std;

string encode(string &message)
{
    int n=message.size();
    string s="";
    for(int i=0;i<n;i++)
    {
        char ch=message[i]; int c=1;
        while(i+1<n)
        {	
            if(ch==message[i+1]) c++,i++;
         	else break;
        }
        s+=ch+to_string(c);
    }
    return s;
}