// https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

//Function to store the zig zag order traversal of tree in a list.
vector <int> zigZagTraversal(Node* root)
{
	vector<int> ans;
      
    queue<Node *> q;
    q.push(root);
    int flag=1; 
    while(!q.empty())
    {
        int s=q.size();
        vector<int> v;
        while(s--)
        {
            Node *temp=q.front();
            v.push_back(temp->data);
            q.pop();
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }
        if(flag)
        {
            for(auto k:v) ans.push_back(k);
            flag=0;
        }
        else
        {
            for(int i=v.size()-1;i>=0;i--) ans.push_back(v[i]);
            flag=1;
        }
    }
    return ans;
}