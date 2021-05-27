// https://practice.geeksforgeeks.org/problems/common-elements1132/1#


#include <bits/stdc++.h>
using namespace std;
vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            vector<int> v;
            int i=0,j=0,k=0,val=INT_MIN;
            while(i<n1 && j<n2 && k<n3)
            {
                if(a[i]==b[j] && b[j]==c[k])
                {
                    if(a[i]!=val){
                    v.push_back(a[i]);
                    val=a[i];
                    }
                    i++,j++,k++;
                }
                else if(a[i]<=b[j] && a[i]<=c[k]) i++;
                else if(b[j]<=c[k]) j++;
                else k++;
            }
            return v;
        }