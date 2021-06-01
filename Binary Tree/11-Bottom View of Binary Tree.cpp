// https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

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

//Function to return a list containing the bottom view of the given tree.
vector <int> bottomView(Node *root)
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
            m[x]=temp->data;
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

