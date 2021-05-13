// https://leetcode.com/problems/binary-tree-postorder-traversal/submissions/

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


///////////////////////////////      RECURSIVE APPROACH    //////////////////////////////////////////

class Solution {
public:
    // left->right->root
    vector<int> v;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL) return v;
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        v.push_back(root->val);
        return v;
    }
};


//////////////////////////////      ITERATIVE APPROACH     ////////////////////////////////////////

class Solution {
public:
    // left->right->root
    vector<int> v;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL) return v;
        stack<TreeNode*> s,ans;
        s.push(root);
        while(!s.empty())
        {
            TreeNode* curr=s.top();
            ans.push(curr);
            s.pop();
            if(curr->left) s.push(curr->left);
            if(curr->right) s.push(curr->right);
        }
        while(!ans.empty())
        {
            v.push_back(ans.top()->val);
            ans.pop();
        }
        return v;
    }
};