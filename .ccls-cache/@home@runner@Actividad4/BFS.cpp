#include <bits/stdc++.h>
using namespace std;

class GraphBFS
{
    int V;    
    list<int> *adj;  
  public:
    GraphBFS(int V); 
    void addEdgeBFS(int v, int w);
  void BFS(int s); 
};

GraphBFS::GraphBFS(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
  
void GraphBFS::addEdgeBFS(int v, int w)
{
    adj[v].push_back(w); 
}
 
void GraphBFS::BFS(int s)
{
  bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
      visited[i] = false;
      list<int> queue;
      visited[s] = true;
      queue.push_back(s);
      list<int>::iterator i;
  
      while(!queue.empty())
      {  
          s = queue.front();
          cout << s << " ";
          queue.pop_front();

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
/*
int main()
{
    // Create a graph given in the above diagram
    GraphBFS g(6);
  
    g.addEdgeBFS(0, 1);
    g.addEdgeBFS(0, 2);
  
    g.addEdgeBFS(1, 2);
    g.addEdgeBFS(1, 3);
    //g.addEdge(1, 4);
  
    g.addEdgeBFS(2, 5);
  
 
    cout << "Following is Breadth First Traversal  \n";
    g.BFS(1);
 
    return 0;
}
*/