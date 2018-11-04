
# Prim's algorithm

Prim's  minimum spanning tree algorithm  takes a graph as input and finds the subset of the edges of that graph which

-> Forms a tree that includes every vertex

-> Has the minimum sum of weights among all the trees that can be formed from the graph.

## How does it work?

 Prim’s algorithm is  a Greedy algorithm. It starts with an empty spanning tree. The idea is to maintain two sets of vertices. The first set contains the vertices already included in the minimum spanning tree, the other set contains the vertices not yet included. At every step, it considers all the edges that connects the two sets, and picks the minimum weight edge from these edges. After picking the edge, it moves to the other endpoint of the edge to the set containing minimum spanning tree.
A group of edges that connects two set of vertices in a graph is called **cut in graph theory**. So, at every step of Prim’s algorithm, we find a cut, pick the minimum weight edge from the cut and include this vertex to minimum spanning tree set.


The steps for implementing Prim's algorithm are as follows:

1. Initialize the minimum spanning tree with a vertex chosen at random.

2. Find all the edges that connect the tree to new vertices, find the minimum and add it to the tree.

3. Keep repeating step 2 until we get a minimum spanning tree.

### Initial 
![1](https://user-images.githubusercontent.com/35976311/47965598-36ca0100-e06f-11e8-9f12-2c1445b62bd3.jpg)

### 1st iteration
![mst1](https://user-images.githubusercontent.com/35976311/47965599-37fb2e00-e06f-11e8-819b-bbf5a7d17eb2.jpg)

### 2nd iteration
![mst2](https://user-images.githubusercontent.com/35976311/47965600-392c5b00-e06f-11e8-9074-7ac799fbc931.jpg)

### 3rd iteration
![mst3](https://user-images.githubusercontent.com/35976311/47965604-3f223c00-e06f-11e8-9a4d-737da46166e6.jpg)

### 4th iteration
![mst4](https://user-images.githubusercontent.com/35976311/47965608-41849600-e06f-11e8-9f3d-1dddcf18dd5c.jpg)

### Final spanning tree
![mst5](https://user-images.githubusercontent.com/35976311/47965610-43e6f000-e06f-11e8-9201-ddf6f8966e3a.jpg)

