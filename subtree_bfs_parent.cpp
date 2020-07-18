#include <bits/stdc++.h> 
using namespace std; 
vector< vector<int> >vv(100005);

vector<int> tree[sz + 1]; 
bool vis[sz + 1]; 
int ans[sz + 1]; 
void bfs(int node) 
{ 
	queue<pair<int, int> > qu; 
	qu.push({ node, 0 }); 

	while (!qu.empty()) { 
		pair<int, int> p = qu.front(); 
		qu.pop(); 
		ans[p.first] = p.second; 
		vis[p.first] = true; 
		for (int child : vv[p.first]) { 
			if (!vis[child]) { 
				qu.push({ child, p.first }); 
			} 
		} 
	} 
} 
int main() 
{ 
 
	int n,x,y,i;
	cin>>n; 
    for(i=1;i<n;i++)
	{
		cin>>x>>y;
		vv[x].push_back(y);
		vv[y].push_back(x);
	}
	
	bfs(1); 
	for (int i = 1; i <=n; i++) 
	{ 
		cout << ans[i] << '\n'; 
	} 

	return 0; 
} 
