//https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
    int m[1000000]={0};
    int s=0;
    for(int i=0;i<=r;i++) m[arr[i]]++;
    for(int i=0;i<1000000;i++)
    {
        s+=m[i];
        if(s>=k)
        {
            return i;
        }
    }
}

int main() {
    return 0;
}