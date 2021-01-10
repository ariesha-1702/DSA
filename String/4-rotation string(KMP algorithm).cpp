// KMP (Knuth Morris Pratt) algorithm
// pi-table or lps longest proper prefix which is a suffix

#include<bits/stdc++.h>
using namespace std;

int lps[100001];

void compute_lps(string pattern){
    int len=pattern.length();
    int index=0,i=1;
    while(i<len)
    {
        if(pattern[i] == pattern[index])
        {
            lps[i] = index + 1;
            index++; i++;
        }
        else
        {
            if(index != 0)
                index = lps[index-1];
            else
            {
                lps[i] =0;
                i++;
            }
        }
    }
}

bool KMP(string text, string pattern){
        compute_lps(pattern);
        int i=0,j=0;
        while(i < text.length() && j < pattern.length()){
            if(text[i] == pattern[j]){
                i++;
                j++;
            }else{
                if(j!=0) j=lps[j-1];
                else i++;
            }
        }
        if(j == pattern.length()) return true;
        return false;
}


int main() {
    string s1,s2; cin>>s1>>s2;
    if(s1.length()!=s2.length()) cout<<"0";
    else cout<<KMP(s1+s1,s2);
    return 0;
}