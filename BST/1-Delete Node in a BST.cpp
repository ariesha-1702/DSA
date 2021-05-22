// https://leetcode.com/problems/delete-node-in-a-bst/

#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    
    int maxfromleft(TreeNode* root)
    {
        if(root == NULL)
            return -1;
        while(root->right != NULL)
            root = root->right;
        return root->val;
    }
    
    TreeNode* deleteNode(TreeNode* root, int val) {
        
        if(root==NULL) return NULL;
        
        if(root->val == val)
        {
            if(root->left != NULL && root->right != NULL)
            {    
                root->val = maxfromleft(root->left);
                root->left = deleteNode(root->left,root->val);
            }
            else if(root->left != NULL)
            {
                return root->left;
            }
            else if(root->right != NULL)
            {
                return root->right;
            }
            else
                return NULL;
        }
        else if(val < root->val) 
            root->left = deleteNode(root->left,val);
        else 
            root->right = deleteNode(root->right,val);
        
        return root;
        
    }
};