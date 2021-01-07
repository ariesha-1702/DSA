#include<bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    // coode here 
    long long int i,zero=0,one=0,two=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0) zero++;
        else if(a[i]==1) one++;
        else two++;
    }
    i=0;
    while(zero--){a[i]=0; i++;}
    while(one--){a[i]=1; i++;}
    while(two--){a[i]=2; i++;}
}

int main() {
    return 0;
}