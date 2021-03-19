#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    const int M=1e9+7;
	long long int fact[1001];

    long long mod(long long x)
    {
        return ((x%M + M)%M);
	}
	
	long long mul(long long a, long long b)
	{
		return mod(mod(a)*mod(b));
	}
	
	long long modPow(long long a, long long b)
	{
            if(b==0)
                return 1LL;
            if(b==1)
                return a%M;
            long long res=1;
            while(b){
                if(b%2==1)
                    res=mul(res,a);
                a=mul(a,a);
                b=b/2;
            }
            return res;
    }

    long long inv(long long x)
    {
        return modPow(x,M-2);
    }

    long long divide(long long a, long long b)
    {
        return mul(a,inv(b));
    }
		
    int nCr(int n, int r){
        int f=1;
        if(f){
        f=0;
        fact[0]=1;
		for(int i=1;i<=1000;i++) fact[i]=mul(fact[i-1],i);
        }
        if(r>n) return 0;
        else
        return divide(fact[n],mul(fact[r],fact[n-r]));
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}  