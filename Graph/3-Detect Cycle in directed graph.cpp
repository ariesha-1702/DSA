// https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1#

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool solve(int source,vector<int> &vis,vector<int> &order,vector<int> g[])
    {
        vis[source]=1;
        order[source]=1;
        for(auto k:g[source])
        {
            if(!vis[k])
            {
                bool check=solve(k,vis,order,g);
                if(check) return true;
            }
            else if(order[k]) return true;
        }
        order[source]=0;
        return false;
    }
    
	bool isCyclic(int V, vector<int> adj[]) {
	   	// code here
	   	vector<int> vis(V,0);
	   	vector<int> order(V,0);
	   	for(int i=0;i<V;i++)
	   	{
	   	    bool res=solve(i,vis,order,adj);
	   	    if(res) return true; 
	   	}
	   	return false;
	}
};

int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

  