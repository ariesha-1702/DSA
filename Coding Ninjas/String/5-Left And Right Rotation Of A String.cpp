// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125343/offering/1469000

#include<bits/stdc++.h>
using namespace std;

string leftRotate(string s, int d) {
    string t="";
    int n=s.size();
    d=d%n;
    for(int i=d;i<n;i++) t+=s[i];
    for(int i=0;i<d;i++) t+=s[i];
    return t;
}

string rightRotate(string s, int d) {
    int n=s.size();
    d=d%n;
    string t="";
    for(int i=n-d;i<n;i++) t+=s[i];
    for(int i=0;i<n-d;i++) t+=s[i];
	return t;
}