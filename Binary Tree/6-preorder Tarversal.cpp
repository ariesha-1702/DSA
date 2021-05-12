// https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/

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
    vector<int> v;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL) return v;
        v.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return v;
    }
};


////////////////////////////       ITERATIVE APPROACH     ////////////////////////////////////////////
// root->left->right
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        vector<int> v;
        stack<TreeNode*> s; 
        s.push(root);
        while(!s.empty())
        {
            TreeNode* curr=s.top();
            v.push_back(curr->val);
            s.pop();
            // push the right child of the popped node into the stack
            if (curr->right) {
                s.push(curr->right);
            }

            // push the left child of the popped node into the stack
            if (curr->left) {
                s.push(curr->left);
            }

            // the right child must be pushed first so that the left child
            // is processed first (LIFO order)
        }
        return v;
    }
};
