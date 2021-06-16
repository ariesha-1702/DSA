// https://leetcode.com/problems/min-stack/

#include<bits/stdc++.h>
using namespace std;

class MinStack {
    stack<int> original, mini;
public:
    /** initialize your data structure here. */
    MinStack() {}
    
    void push(int val) {
        if(mini.empty() || val<=mini.top())
            mini.push(val);
        original.push(val);
    }
    
    void pop() {
        if(original.top()==mini.top())
            mini.pop();
        original.pop();
    }
    
    int top() {
        return original.top();
    }
    
    int getMin() {
        return mini.top();
    }
};


////////////////////////////////////////////////////////////////////////////////////////////////////////

// https://practice.geeksforgeeks.org/problems/special-stack/1#


stack<int> mini;

void push(stack<int>& s, int a){
	
	s.push(a);
	if(mini.empty() || a<=mini.top()) mini.push(a);
	
}

bool isFull(stack<int>& s,int n){
	
	if(s.size()==n) return true;
	return false;
	
}

bool isEmpty(stack<int>& s){
	
	if(s.size()==0) return true;
	return false;
	
}

int pop(stack<int>& s){
	
	int x=s.top();
	s.pop();
	if(x==mini.top()) mini.pop();
	
}

int getMin(stack<int>& s){
	
	return mini.top();
	
}