// https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/

/* Definition for a binary tree node. */

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


///////////////////////////////////////////   RECURSIVE APPROACH   ////////////////////////////////////

class Solution {
public:
    // left->root->right
    vector<int> v;
    void inorder(TreeNode* root)
    {
        if(root==NULL) return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return v;
    }
};



////////////////////////////////////////    ITERATIVE APPROACH    /////////////////////////////////////


class Solution {
public:
    // left->root->right
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        vector<int> v;
        stack<TreeNode*> s;
        TreeNode* curr = root;
        while(curr!=NULL || !s.empty())
        {
            while(curr!=NULL)
            {
                s.push(curr);
                curr=curr->left;
            }
            curr=s.top();
            v.push_back(curr->val);
            s.pop();
            curr=curr->right;
        }
        return v;
    }
};