#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,n) for(ll i=0;i<n;i++)
#define fa(i,a,b) for(ll i=a;i<=b;i++)
#define fr(i,n) for(ll i=n-1;i>=0;i--)
#define fi first
#define se second
#define vll vector<ll>
#define mll map<ll,ll>
#define sll set<ll>
#define pll pair<ll,ll>
#define all(a) a.begin(),a.end()
#define csp(x) cout<<fixed<<setprecison(x)
#define setbits(x) __builtin_popcount(x)
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

int main() {
    sync
    CASE{
        int n; cin>>n;
        string s; cin>>s;
        map<char,int>m;
        char ch='a';
        for(int i=1;i<=26;i++)
        {
            int ans=0;
            for(int j=0;j<n;j++)
            {
                if(s[j]==ch)
                {
                    int c=0;
                    while(j<n && s[j]==ch)
                    {
                        c++; j++;
                    }
                    ans=max(ans,c);
                }
            }
            m[ch]=ans;
            ch++;
        }
        int mini=m['a'];
        char ch1;
        for(auto k:m)
        {
            if(k.second<mini)
            {
                mini=k.second;
                ch1=k.first;
            }
        }

        if(mini==0) cout<<ch1<<endl;
        else
        {
            set<string> set;
            for(auto k:m)
            {
                string t="";
                for(int i=0;i<k.second;i++) t+=k.first;
                if(t[k.second-1]=='z') t+='a';
                else t[k.second-1]++;
                set.insert(t);
            }    
            cout<<*set.begin()<<endl;
        }
    }
    return 0;
}

// from itertools import product

// l=[chr(i) for i in range(97,123)]

// res = [''.join(res) for res in product(l, repeat=3)]

// t=int(input())

// while(t):
//     t-=1
//     n=int(input())
//     s=input()
//     for i in res:
//         if(i not in s):
//             print(i)
//             break

