#include<bits/stdc++.h>
using namespace std;

int min_max(int a[], int l, int r) {
    int min=a[0];
    int max=a[0];
    for(int i=0;i<=r;i++){
        if(a[i]<min) min=a[i];
        if(a[i]>max) max=a[i];
    }
    cout<<min<<" "<<max;
}

int main() {
    return 0;
}