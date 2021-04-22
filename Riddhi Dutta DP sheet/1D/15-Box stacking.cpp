// https://practice.geeksforgeeks.org/problems/box-stacking/1
// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    /*The function takes an array of heights, width and 
    length as its 3 arguments where each index i value 
    determines the height, width, length of the ith box. 
    Here n is the total no of boxes.*/
    
    struct box {
    int h,w,l;
    };
    
    static bool compare(struct box a,struct box b)
    {
        return (a.w*a.l > b.w*b.l)?true:false;
    }
    
    int maxHeight(int height[],int width[],int length[],int n)
    {
        // storing all 3 possible combinations of box
        int len = 3*n;
        box a[len];   
        int index = 0;
        for(int i=0;i<n;++i)
        {
            a[index].h = height[i];
            a[index].w = max(width[i],length[i]);
            a[index].l = min(width[i],length[i]);
            index+=1;
           
            a[index].h = width[i];
            a[index].w = max(length[i],height[i]);
            a[index].l = min(length[i],height[i]);
            index+=1;
           
            a[index].h = length[i];
            a[index].w = max(height[i],width[i]);
            a[index].l = min(height[i],width[i]);
            index+=1;
        }
       
        // sorting on the basis of base area
        sort(a,a+len,compare);
       
        // finding LIS
        int lis[len];
        for(int i=0;i<len;i++)
            lis[i] = a[i].h;
       
        for(int i=1;i<len;i++)
        {
            for(int j=0;j<i;j++)
            {
                if((a[i].w < a[j].w) && (a[i].l < a[j].l) && (lis[i] < lis[j]+a[i].h))
                    lis[i] = lis[j] + a[i].h;
            }
        }
        int maxi = 0;
        for(int i=0;i<len;i++)
            maxi = max(maxi,lis[i]);
       
        return maxi;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	

 	int A[105],B[105],C[105];
	for(int i=0;i<n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		A[i]=a;
		B[i]=b;
		C[i]=c;
	}Solution ob;
	cout<<ob.maxHeight(A,B,C,n)<<endl;
}
 
}   // } Driver Code Ends