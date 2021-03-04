

#include <stdio.h>
#include "graph.h"

int main(){
  GRAPH *graph = new_graph(5);
  add_edge(graph, 0, 1, 7);
  add_edge(graph, 1, 0, 7);
  add_edge(graph, 0, 2, 3);
  add_edge(graph, 2, 0, 3);
  add_edge(graph, 1, 2, 4);
  add_edge(graph, 2, 1, 4);
  add_edge(graph, 2, 3, 10);
  add_edge(graph, 3, 2, 10);
  add_edge(graph, 1, 3, 9);
  add_edge(graph, 3, 1, 9);
  add_edge(graph, 1, 4, 11);
  add_edge(graph, 4, 1, 11);
  display_graph(graph);
  clean_graph(&graph);
  printf("\ngraph is deleted");
    return 0;
}

/*
gcc graph.c a10q1.c -o a10q1
a10q1
weighted graph in adjacency list
order: 5
size: 12
node from: (to weight)
node 0: (1, 7) (2, 3)
node 1: (0, 7) (2, 4) (3, 9) (4, 11)
node 2: (0, 3) (1, 4) (3, 10)
node 3: (2, 10) (1, 9)
node 4: (1, 11)
graph is deleted
*/
