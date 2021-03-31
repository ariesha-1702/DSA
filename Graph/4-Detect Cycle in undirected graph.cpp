#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool solve(int source,int parent,vector<int> &vis,vector<int> g[])
    {
        vis[source]=1;
        for(auto k:g[source])
        {
            if(!vis[k])
            {
                bool check=solve(k,source,vis,g);
                if(check) return true;
            }
            else if(k!=parent) return true;
        }
        return false;
    }
    
	bool isCycle(int V, vector<int>adj[]){
	    // Code here
	    vector<int> vis(V,0);
	   	for(int i=0;i<V;i++)
	   	{
	   	    if(!vis[i])
	   	    {
    	   	    bool res=solve(i,-1,vis,adj);
    	   	    if(res) return true;
	   	    }
	   	}
	   	return false;
	}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  