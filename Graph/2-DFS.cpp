// https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    vector<int> v;
    
    void dfs(int source,vector<int> &vis,vector<int> g[])
    {
        vis[source]=1;
        v.push_back(source);
        for(auto k:g[source])
        {
            if(!vis[k])
            {
                dfs(k,vis,g);
            }
        }
    }
    
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    v.clear();
	    vector<int> vis(V,0);
	    dfs(0,vis,adj);
	    return v;
	}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.dfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  