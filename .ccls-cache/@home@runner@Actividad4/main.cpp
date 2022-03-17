// C++ program to print DFS traversal from
// a given vertex in a given graph
#include <bits/stdc++.h>
using namespace std;

// This class represents a directed graph using
// adjacency list representation
class GraphBFS
{
    int V;    // No. of vertices
 
    // Pointer to an array containing adjacency
    // lists
    list<int> *adj;  
  public:
    GraphBFS(int V);  // Constructor
 
    // function to add an edge to graph
    void addEdgeBFS(int v, int w);
 
    // prints BFS traversal from a given source s
  void BFS(int s); 
};

GraphBFS::GraphBFS(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
  
void GraphBFS::addEdgeBFS(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}
 
void GraphBFS::BFS(int s)
{
  // Mark all the vertices as not visited
  bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
      visited[i] = false;
      // Create a queue for BFS
      list<int> queue;
      // Mark the current node as visited and enqueue it
      visited[s] = true;
      queue.push_back(s);
      // 'i' will be used to get all adjacent
      // vertices of a vertex
      list<int>::iterator i;
  
      while(!queue.empty())
      {  
          // Dequeue a vertex from queue and print it
          s = queue.front();
          cout << s << " ";
          queue.pop_front();
 
          // Get all adjacent vertices of the dequeued
          // vertex s. If a adjacent has not been visited,
          // then mark it visited and enqueue it
          for (i = adj[s].begin(); i != adj[s].end(); ++i)
          {
              if (!visited[*i])
              {
                  visited[*i] = true;
                  queue.push_back(*i);
              }
          }
      }
}
 

// Graph class represents a directed graph
// using adjacency list representation
class GraphDFS {
public:
	map<int, bool> visited;
	map<int, list<int> > adj;

	// function to add an edge to graph
	void addEdgeDFS(int v, int w);

	// DFS traversal of the vertices
	// reachable from v
	void DFS(int v);
};

void GraphDFS::addEdgeDFS(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}

void GraphDFS::DFS(int v)
{
	// Mark the current node as visited and
	// print it
	visited[v] = true;
	cout << v << " ";

	// Recur for all the vertices adjacent
	// to this vertex
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFS(*i);
}

// Driver code
int main(){
    
     // Create a graph given in the above diagram
    GraphBFS G(4);
    G.addEdgeBFS(0, 1);
    G.addEdgeBFS(0, 2);
    G.addEdgeBFS(1, 2);
    G.addEdgeBFS(2, 0);
    G.addEdgeBFS(2, 3);
    G.addEdgeBFS(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);
    
	// Create a graph given in the above diagram
	GraphDFS g;
	g.addEdgeDFS(0, 1);
	g.addEdgeDFS(0, 2);
	g.addEdgeDFS(1, 2);
	g.addEdgeDFS(2, 0);
	g.addEdgeDFS(2, 3);
	g.addEdgeDFS(3, 3);

	cout << "Following is Depth First Traversal"
			" (starting from vertex 2) \n";
	g.DFS(2);

	return 0;
}

// improved by Vishnudev C

