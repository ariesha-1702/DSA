/*
Dutch National Flag algorithm or Three-way partitioning

 

The Dutch National Flag algorithm or three-way partitioning algorithm allows sorting the array consisting of 0s, 1s, and 2s in a single traversal only and in constant space.


Steps:

Maintain three indices low = 0, mid = 0, and high = N-1, where N is the number of elements in the array.
The range from 0 to low denotes the range containing 0s.
The range from low to mid denotes the range containing 1s.
The range from mid to high denotes the range containing any of 0s, 1s, or 2s.
The range from high to N-1 denotes the range containing 2s.
The mid pointer denotes the current element, traverses the array while mid<=high i.e we have exhausted the search space for the range which can contain any of 0s, 1s, or 2s.
If A[mid] == 0, swap A[mid] and A[low] and increment low and mid pointers by 1.
If A[mid] == 1, increment the mid pointer by 1.
If A[mid] == 2, swap A[high] and A[mid] and increment mid by 1 and decrement high by 1.
The resulting array will be a sorted array containing 0s, 1s, and 2s.


*/

// https://www.codingninjas.com/codestudio/guided-paths/hack-with-infy-preparation-path/content/125342/offering/1468970

#include<bits/stdc++.h>
using namespace std;
void sort012(int *arr, int n)
{
	int low=0,mid=0,high=n-1;

	while(mid<=high)
    {
		if(arr[mid]==0) swap(arr[low++],arr[mid++]);
		else if(arr[mid]==1) mid++;
        else if(arr[mid]==2) swap(arr[mid],arr[high--]);
     }
}