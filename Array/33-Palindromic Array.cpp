// https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1

// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends


/*Complete the function below*/
int PalinArray(int a[], int n)
{  
    for(int i=0;i<n;i++)
    {
        string n=to_string(a[i]);
        int start=0,end=n.size()-1;
        while(start<end)
        {
            if(n[start]!=n[end]) return 0;
            start++,end--;
        }
    }
    return 1;
}