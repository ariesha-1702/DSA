// https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1#

// O(n^2) approach
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 

int height(struct Node* root){
        
    if(root==NULL) return 0;
    return 1+max(height(root->left),height(root->right));
        
}
//Function to check whether a binary tree is balanced or not.
bool isBalanced(Node *root)
{
    if(root==NULL) return true;
    int h1=height(root->left);
    int h2=height(root->right);
    if(abs(h1-h2)<=1 && isBalanced(root->right) && isBalanced(root->left)) return true;
    else return false;
}
