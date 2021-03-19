#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
	
	
	void duplicates(string s)
	{
	    map<char,int> m;
        for(auto k:s) m[k]++;
        for(auto i:m){
            if(i.second>1) cout<<i.first<<" "<<i.second<<endl;
        }
	}
};

int main(){
    Solution ob;
    ob.duplicates("ababaadfghas");
}