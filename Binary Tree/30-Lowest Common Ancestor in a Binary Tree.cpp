//https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1

#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution
{
    public:
    
    Node* answer;
    int a, b;
    
    int traverse(Node* n){
        if(n==NULL) return 0;
        
        int left = traverse(n->left);
        int right = traverse(n->right);
        
        if(n->data == a || n->data == b){
            if(left || right){
                answer = n;
                return 0;
            }
            return 1;
        }
        
        if(left && right){
            answer = n;
            return 0;
        }
        
        return (left || right);
    }
    
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2)
    {
        answer = NULL;
        a = n1; b = n2;
        traverse(root);
        return answer;
    }
};
