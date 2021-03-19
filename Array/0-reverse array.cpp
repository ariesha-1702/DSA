#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        int temp;
        while(start<end)
        {
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++; end--;
        }
    }
};

int main() {
    return 0;
}
