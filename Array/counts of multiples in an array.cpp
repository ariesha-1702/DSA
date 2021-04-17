#include <bits/stdc++.h>
using namespace std;

vector<int> countMultiples(int arr[], int q[], int n, int m) ;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n >> m;
        int q[m], arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (i = 0; i < m; i++) cin >> q[i];

        vector<int> answering = countMultiples(arr, q, n, m);
        for (auto it : answering) cout << it << " ";
        cout << "\n";
    }
    return 0;
}



vector<int> countMultiples(int A[], int Q[], int n, int m) {
    int res[100001] = {0};
    int count[100001] = {0};
    int maxi = INT_MIN;
    for(int i=0;i<n;i++) count[A[i]]++, maxi=max(maxi,A[i]);
    
    for(int i=1;i<=maxi;i++){
        for(int j=i;j<=maxi;j+=i)
            res[i]+=count[j];
    }
    
    vector<int> v;
    
    for(int g=0;g<m;g++)
        v.push_back(res[Q[g]]);
    
    return v;
}