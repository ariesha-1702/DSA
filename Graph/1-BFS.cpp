#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    vector<int> v;
	    vector<int> vis(V,0);
	    vis[0]=1;
	    queue<int> q;
	    q.push(0);
	    while(!q.empty())
	    {
	        int x=q.front();
	        q.pop();
	        v.push_back(x);
	        for(auto k:adj[x])
	        {
	            if(!vis[k])
	            {
	                vis[k]=1;
	                q.push(k);
	            }
	        }
	    }
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
    // 		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  