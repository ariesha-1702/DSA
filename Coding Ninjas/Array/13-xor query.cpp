// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125342/offering/1468981

#include<bits/stdc++.h>
using namespace std;
vector<int> xorQuery(vector<vector<int> >& queries)
{
	vector<int> v;
    int prefix[queries.size()+1]={0};
    for(auto k:queries)
    {
        if(k[0]==1) v.push_back(k[1]);
        else if(k[0]==2)
        {
            prefix[0]^=k[1]; prefix[v.size()]^=k[1];
        }
    }
    for(int i=1;i<queries.size()+1;i++) prefix[i]^=prefix[i-1];
    for(int i=0;i<v.size();i++) v[i]^=prefix[i];
    return v;
}