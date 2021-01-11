// Brian Kernighan’s Algorithm
// if we subtract a number by 1 and do bitwise & with itself (n & (n-1))
// we unset the rightmost set bit
// if we do n & (n-1) in a loop and count the no of times loop executes we get the set bit count
#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    int setBits(int n)
    {
        int c=0;
        while(n>0)
        {
            n&=(n-1); c++;
        }
        return c;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}