#include<bits/stdc++.h>
using namespace std;
vector< vector<int> >vv(10005); 
int vis[100005]={0};
void dfs(int src)
{
	vis[src]=1;
	for(int i=0;i<vv[src].size();i++)
	{
		if(vis[vv[src][i]]==0)
			dfs(vv[src][i]);
	}
}
int main()
{
	int n,m,cc_count=0;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		vv[x].push_back(y);
		vv[y].push_back(x);
	}
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			dfs(i);
			cc_count++;
		}
	}
	cout<<cc_count<<endl;
}