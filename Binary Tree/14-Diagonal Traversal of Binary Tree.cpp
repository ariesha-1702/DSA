// https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1

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

void func(Node *root,int distance,map<int,vector<int>> &m)
{
    if(root==NULL) return;
    m[distance].push_back(root->data);
    
    func(root->left,distance+1,m);
    func(root->right,distance,m);
}

vector<int> diagonal(Node *root)
{
   vector<int> v;    
   map<int,vector<int>> m;
   
   func(root,0,m);
   
   for(auto k:m)
   {
       for(auto k1:k.second)
       {
           v.push_back(k1);
       }
   }
   return v;
}