  vector<int>bfsOfGraph(int V, vector<int> adj[])
{
   vector<int>ans;
   queue<int>q;
   q.push(0);
   vector<int>vis(V,0);
   vis[0]=1;
   while(!q.empty())
   {
       int z=q.front();
       q.pop();
       ans.push_back(z);
	       for(int i=0;i<adj[z].size();i++)
	       {
	           if(vis[adj[z][i]]==0)
	           {
	               vis[adj[z][i]]=1;
	               q.push(adj[z][i]);
	           }
	       }
	   }
	   return ans;
}
