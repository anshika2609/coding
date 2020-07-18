// C++ implementation for 
// the above approach 

#include <bits/stdc++.h> 
using namespace std; 

const int sz = 1e5; 

// Adjacency list representation 
// of the tree 
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
void addEdge(int a, int b) 
{ 

	// Add a to b's list 
	tree[a].push_back(b); 

	// Add b to a's list 
	tree[b].push_back(a); 
} 

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
		for (int child : tree[p.first]) { 
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
	int n = 6; 

	addEdge(0, 1); 
	addEdge(0, 2); 
	addEdge(1, 3); 
	addEdge(2, 4); 
	addEdge(2, 5); 

	// Calling modified bfs function 
	bfs(0); 

	int q[] = { 2, 3 }; 

	for (int i = 0; i < 2; i++) { 
		cout << ans[q[i]] << '\n'; 
	} 

	return 0; 
} 
