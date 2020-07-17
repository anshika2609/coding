// C++ implementation for 
// the above approach 

#include <bits/stdc++.h> 
using namespace std; 

const int sz = 1e5; 

// Adjacency list representation 
// of the tree 
vector< vector<int> >vv(100005);

vector<int> tree[sz + 1]; 

// Boolean array to mark all the 
// vertices which are visited 
bool vis[sz + 1]; 

// Array of vector where ith index 
// stores the path from the root 
// node to the ith node 
int ans[sz + 1]; 

// Function to create an 
// edge between two vertices 

// Modified Breadth-First Function 
void bfs(int node) 
{ 

	// Create a queue of {child, parent} 
	queue<pair<int, int> > qu; 

	// Push root node in the front of 
	qu.push({ node, 0 }); 

	while (!qu.empty()) { 
		pair<int, int> p = qu.front(); 

		// Dequeue a vertex from queue 
		qu.pop(); 
		ans[p.first] = p.second; 
		vis[p.first] = true; 

		// Get all adjacent vertices of the dequeued 
		// vertex s. If any adjacent has not 
		// been visited then enqueue it 
		for (int child : vv[p.first]) { 
			if (!vis[child]) { 
				qu.push({ child, p.first }); 
			} 
		} 
	} 
} 

// Driver code 
int main() 
{ 

	// Number of vertices 
	int n,x,y,i;
	cin>>n; 
    for(i=1;i<n;i++)
	{
		cin>>x>>y;
		vv[x].push_back(y);
		vv[y].push_back(x);
	}
	

	// Calling modified bfs function 
	bfs(1); 
	for (int i = 1; i <=n; i++) 
	{ 
		cout << ans[i] << '\n'; 
	} 

	return 0; 
} 
