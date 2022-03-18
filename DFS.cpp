#include <bits/stdc++.h>
using namespace std;
 //se crea un grafo usando mapas 
class GraphDFS {
public:
    map<int, bool> visited;
    map<int, list<int> > adj;
 
    void addEdgeDFS(int v, int w);
 
    void DFS(int v);
};
 //agregar vertices al grafo
void GraphDFS::addEdgeDFS(int v, int w)
{
    adj[v].push_back(w); 
}
 //constructor del grafo
void GraphDFS::DFS(int v)
{
    visited[v] = true;
    cout << v << " ";
  //se itera usnado un solo for para revisar si se ha visitado o no
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}
/*
int main()
{
    GraphDFS g;
    g.addEdgeDFS(0, 1);
    g.addEdgeDFS(0, 2);
    g.addEdgeDFS(1, 2);
    g.addEdgeDFS(2, 3);
    
 
    cout << "Following is Depth First Search \n";
    g.DFS(1);
 
    return 0;
}
 */