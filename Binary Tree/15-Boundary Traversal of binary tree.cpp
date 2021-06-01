// https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution {
public:

    vector<int> v;
    void left(Node *root)
    {
        if(root==NULL) return;
        if(root->left)
        {
            v.push_back(root->data);
            left(root->left);
        }
        else if(root->right)
        {
            v.push_back(root->data);
            left(root->right);
        }
    }

    void leaf(Node *root)
    {
        if(root==NULL) return;
        
        leaf(root->left);
        
        if(root->left==NULL && root->right==NULL)
            v.push_back(root->data);
        
        leaf(root->right);
    }

    void right(Node *root)
    {
        if(root==NULL) return;
        if(root->right)
        {
            right(root->right);
            v.push_back(root->data);
        }
        else if(root->left)
        {
            right(root->left);
            v.push_back(root->data);
        }
    }

    vector <int> printBoundary(Node *root)
    {
        if(root==NULL) return v;
        v.push_back(root->data);
        left(root->left);
        leaf(root->left);
        leaf(root->right);
        right(root->right);
        return v;
    }
};

