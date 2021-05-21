// https://www.interviewbit.com/problems/shortest-unique-prefix/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    struct TrieNode
    {
        struct TrieNode *children[500];
        int freq;  
    };
    
    struct TrieNode *newNode()
    {
        struct TrieNode *Node = new TrieNode();
        Node->freq = 1;
        for (int i = 0; i<500; i++)
        {
            Node->children[i] = NULL;
        }
        return Node;
    }
    
    void insert(struct TrieNode *root,string word) 
    {
        
        int n = word.size();
        TrieNode* parent = root;
        for(int i=0; i<n; i++)
        {
            int val = word[i]-'a';
            if(parent->children[val]==NULL)
            {
                parent->children[val] = newNode();
            }
            else
            {
                (parent->children[val]->freq)++;
            }
            parent = parent->children[val];
        }
    }
    
    string prefix(struct TrieNode *root,string word)
    {
        int n = word.size();
        TrieNode* parent = root;
        string s="";
        for(int j=0; j<n; j++)
        {
            int val = word[j]-'a';
            s = s+word[j];
            if((parent->children[val]->freq)==1)
            {
                return s;
            }
            parent = parent->children[val];
        }
    }

    vector<string> findPrefixes(string arr[], int n)
    {
        struct TrieNode *root = newNode();
        root->freq = 0;
        for (int i = 0; i<n; i++)
        {
            insert(root, arr[i]);
        }
        
        vector<string> ans;
        
        for(int i=0;i<n;i++)
        {
            string s=prefix(root,arr[i]);
            ans.push_back(s);
        }
        return ans;
    }
    
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        Solution ob;
        vector<string> ans = ob.findPrefixes(arr, n);
        
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] <<" ";


        cout << "\n";

    }

    return 0;
}