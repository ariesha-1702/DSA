// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125343/offering/1468996

#include<bits/stdc++.h>
using namespace std;
string convertString(string str) 
{
    str[0]=toupper(str[0]);
	for(int i=0;i<str.size();i++)
    {
        if(str[i]==' ')
        {
            i++;
            str[i]=toupper(str[i]);
        }
    }
    return str;
}
