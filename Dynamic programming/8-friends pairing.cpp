#include <bits/stdc++.h> 
using namespace std; 

class Solution
{
public:

    const int M=1e9+7;
    
    long long mod(long long x)
    {
        return ((x%M + M)%M);
	}
	
	long long mul(long long a, long long b)
	{
		return mod(mod(a)*mod(b));
	}
	
	long long add(long long a, long long b)
	{
		return mod(mod(a)+mod(b));
	}

    int countFriendsPairings(int n) 
    { 
        // code here
        int x=1,y=2,total=0,i;
        if(n<3) return n;
        for(i=3;i<=n;i++)
        {
            total=add(y,mul(x,i-1));
            x=y;
            y=total;
        }
        return total;
    }
};    
 
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 
  