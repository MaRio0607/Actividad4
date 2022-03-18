#include <bits/stdc++.h>
using namespace std;
 
class GraphDLS {
public:
    map<int, bool> visited;
    map<int, list<int> > adj;
 
    void addEdgeDLS(int v, int w);
 
    void DLS(int v, int l);

};
 
void GraphDLS::addEdgeDLS(int v, int w)
{
    adj[v].push_back(w); 
}
 
void GraphDLS::DLS(int v, int l)
{
    visited[v] = true;
    cout << v << " ";

    list<int>::iterator i;
    if(l != 0)
    {
      for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DLS(*i, l-1);
    }
}
/*
int main()
{
    GraphDLS g;
    g.addEdgeDLS(0, 1);
    g.addEdgeDLS(0, 2);
    g.addEdgeDLS(1, 2);
    g.addEdgeDLS(2, 3);
    
 
    cout << "Following is Depth Limited Search \n";
    g.DLS(0, 1);
 
    return 0;
}
*/