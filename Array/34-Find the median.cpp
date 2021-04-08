#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here
		    sort(v.begin(),v.end());
		    int index,l=v.size();
		    if(l&1)
		    {
		        index=(l+1)/2;
		        return v[index-1];
		    }
		    else
		    {
		        index=l/2;
		        return (v[index-1]+v[index])/2;
		    }
		}
};


int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}
