// https://practice.geeksforgeeks.org/problems/edit-distance3702/1

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int precalc[1001][1001];
    
    int calculate(string x,string y,int l1,int l2)
    {
        // If any of the string is traversed completely 
        if(l1==-1) return l2+1;
        if(l2==-1) return l1+1;
        
        if(precalc[l1][l2]!=-1) return precalc[l1][l2];
        if(x[l1]==y[l2]) return precalc[l1][l2]=calculate(x,y,l1-1,l2-1);
        
        int a=calculate(x,y,l1-1,l2-1); //replace
        int b=calculate(x,y,l1,l2-1); //insert
        int c=calculate(x,y,l1-1,l2); //remove
        
        return precalc[l1][l2]=1+min(a,min(b,c));
    }
    
    int editDistance(string s, string t) {
        // Code here
        memset(precalc,-1,sizeof(precalc));
        int l1=s.length();
        int l2=t.length();
        return calculate(s,t,l1-1,l2-1);
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  