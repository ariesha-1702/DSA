// https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1

#include <bits/stdc++.h>
using namespace std;
string isSubset(int a1[], int a2[], int n, int m) {
    
    if(m>n) return "No";
    
    int temp[100005]={0};
    
    for(int i=0;i<n;i++) temp[a1[i]]++;
    
    for(int j=0;j<m;j++)
    {
        if(temp[a2[j]]==0) return "No";
        temp[a2[j]]--;
    }
    return "Yes";
}