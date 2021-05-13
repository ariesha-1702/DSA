// https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1#
/* A binary tree node */

#include<bits/stdc++.h>
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

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   if(root==NULL) return {};
   vector<int> v;
   queue<Node*> q;
   Node* curr=NULL;
   q.push(root);
   while(!q.empty())
   {
       int s=q.size(); // Total nodes at current level
       for(int i=0;i<s;i++) // Accessing all nodes
       {
           curr=q.front();
           q.pop();
           if(i==s-1) v.push_back(curr->data);
           if(curr->left) q.push(curr->left);
           if(curr->right) q.push(curr->right);
       }
   }
   return v;
}