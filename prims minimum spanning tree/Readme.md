
# Prim's algorithm

Prim's  minimum spanning tree algorithm  takes a graph as input and finds the subset of the edges of that graph which

-> Forms a tree that includes every vertex

-> Has the minimum sum of weights among all the trees that can be formed from the graph.

## How does it work?

 Prim’s algorithm is  a Greedy algorithm. It starts with an empty spanning tree. The idea is to maintain two sets of vertices. The first set contains the vertices already included in the minimum spanning tree, the other set contains the vertices not yet included. At every step, it considers all the edges that connects the two sets, and picks the minimum weight edge from these edges. After picking the edge, it moves to the other endpoint of the edge to the set containing minimum spanning tree.
A group of edges that connects two set of vertices in a graph is called **cut in graph theory**. So, at every step of Prim’s algorithm, we find a cut, pick the minimum weight edge from the cut and include this vertex to minimum spanning tree set.
