#include <bits/stdc++.h>
using namespace std;
 
class GraphDFS {
public:
    map<int, bool> visited;
    map<int, list<int> > adj;
 
    void addEdgeDFS(int v, int w);
 
    void DFS(int v);
};
 
void GraphDFS::addEdgeDFS(int v, int w)
{
    adj[v].push_back(w); 
}
 
void GraphDFS::DFS(int v)
{
    visited[v] = true;
    cout << v << " ";

    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}
/*
int main()
{
    GraphDFS g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    
 
    cout << "Following is Depth First Search"
            " (starting from vertex 2) \n";
    g.DFS(1);
 
    return 0;
}
 */