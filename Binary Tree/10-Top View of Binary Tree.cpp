// https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1

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
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    
    vector<int> topView(Node *root)
    {
        // performing level order traversal and maintaining x-co-ordinate
        vector<int> ans;
        map<int,int> m;
        queue<pair<Node*,int>> q;
        q.push(make_pair(root,0));
        
        while(!q.empty())
        {
            Node *temp=q.front().first;
            int x=q.front().second;
            if(m.find(x)==m.end()) m[x]=temp->data;
            q.pop();
            
            if(temp->left!=NULL)
            {
                q.push(make_pair(temp->left,x-1));
            }
            if(temp->right!=NULL)
            {
                q.push(make_pair(temp->right,x+1));
            }
        }
        for(auto k:m)
        {
            ans.push_back(k.second);
        }
        return ans;
    }

};



