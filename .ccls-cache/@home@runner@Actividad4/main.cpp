
#include <bits/stdc++.h>
using namespace std;

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
  
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(1);

    ///////////////////////////////////////////////////////////////////

    GraphDFS g;
    g.addEdgeDFS(0, 1);
    g.addEdgeDFS(0, 2);
    g.addEdgeDFS(1, 2);
    g.addEdgeDFS(2, 3);
    
 
    cout << "Following is Depth First Search"
            " (starting from vertex 2) \n";
    g.DFS(1);
 
    return 0;
 
    ///////////////////////////////////////////////////////////////////

      GraphDLS g;
    g.addEdgeDLS(0, 1);
    g.addEdgeDLS(0, 2);
    g.addEdgeDLS(1, 2);
    g.addEdgeDLS(2, 3);
    
 
    cout << "Following is Depth Limited Search"
            " (starting from vertex 2) \n";
    g.DLS(0, 1);
 
    return 0;
  
}
