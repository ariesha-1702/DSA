// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125343/offering/1468998

#include<bits/stdc++.h>
using namespace std;

string removeVowels(string a) {
    string s="";
    for(auto k:a)
    {
        if(k!='a' && k!='e' && k!='i' && k!='o' && k!='u' && k!='A' && k!='E' && k!='I' && k!='O' && k!='U')
            s+=k;
    }
    return s;
}