// https://practice.geeksforgeeks.org/problems/maximum-sum-rectangle2948/1

 /* Solution:
 * Keep temp array with size as number of rows. Start left and right from 0
 * and keep adding values for each row and maintain them in this temp array.
 * Run Kadane's algorithm to find max sum subarray in temp. Now increment right by 1. 
 * When right reaches last column reset right to 1 and left to 1.
 
 * Space complexity of this algorithm is O(row)
 * Time complexity of this algorithm is O(row*col*col) */



#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    int kadane(int arr[], int n){
        int max_sum=-10000001,max_sum1=0;
        for(int i=0;i<n;i++)
        {
            max_sum1+=arr[i];
            if(max_sum<max_sum1) max_sum=max_sum1;
            if(max_sum1<0) max_sum1=0;
        }
        return max_sum;
    }  
  
  
    int maximumSumRectangle(int r, int c, vector<vector<int>> m) 
    {
        
        int t[r],result=INT_MIN;
        for(int left=0;left<c;left++)
        {
            for(int i=0;i<r;i++) t[i]=0;
            
            for(int right=left;right<c;right++)
            {
                for(int i=0;i<r;i++) t[i]+=m[i][right];
                
                int maxsum=kadane(t,r);
                
                result=max(result,maxsum);
            }
        }
        return result;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}  