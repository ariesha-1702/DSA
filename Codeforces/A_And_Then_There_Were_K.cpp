#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t; cin>>t;
    while(t--)
    {
        long long int n,s=0; cin>>n;
        int count = 0;
        while (n)
        {
                count++;
                n >>= 1;
        }
        count-=1;
        for(int i=0;i<count;i++)
        {
            s+=pow(2,i);
        }
        cout<<s<<endl;
    }
    return 0;
}