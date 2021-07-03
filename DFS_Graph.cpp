class Solution 
{
    public:
	vector<int>ans;
	void solve(int src,vector<int>&vis,vector<int>adj[])
    {
        vis[src] = 1;
        ans.push_back(src);
        for(int i=0;i<adj[src].size();i++)
        {
            if(vis[adj[src][i]]==0)
                solve(adj[src][i],vis,adj);
        }
    }
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    vector<int>vis(V,0);
	    solve(0,vis,adj);
	    return ans;
	}
};
