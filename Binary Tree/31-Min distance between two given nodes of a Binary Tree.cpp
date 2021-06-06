// https://practice.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1#

#include <bits/stdc++.h>

using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

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
    
    int distance(Node *root,int d,int a)
    {
        if(root==NULL) return -1;
        if(root->data == a) return d;
        
        int left=distance(root->left,d+1,a);
        int right=distance(root->right,d+1,a);
        
        return left==-1?right:left;
    }
    
    int findDist(Node* root, int a, int b) {
        
        Node *ans=lca(root,a,b);
        int d1=distance(ans,0,a);
        int d2=distance(ans,0,b);
        return d1+d2;
        
    }