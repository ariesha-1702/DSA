#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here
        vector<int> v;
        int a=0,b=0,x=0;
        // To store the xor of all elements in x
        // x^x=0
        // x contains xor of 2 unique elements
        for(auto i:nums) x^=i;
        // finding the rightmost set bit in xor result
        int setbit=x&~(x-1);
        // finding the unique elements by dividing the array into 2 parts based on setbit
        for(auto i:nums)
        {
            if(setbit&i) a^=i;
            else b^=i;
        }
        if(a<b)
        {
            v.push_back(a);
            v.push_back(b);
        }
        else
        {
            v.push_back(b);
            v.push_back(a);
        }
        return v;
    }
};
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  