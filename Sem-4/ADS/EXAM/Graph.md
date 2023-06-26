# Unit-4 Advanced Data Structures #

## Representation of Graphs ##

There are two ways to represent a graph:

    1. Adjacency Matrix
    2. Adjacency List2

**Example:**

![Graph](https://upload.wikimedia.org/wikipedia/commons/thumb/5/5b/6n-graf.svg/220px-6n-graf.svg.png)

**Adjacency Matrix:**
The matrix is fo (n x n) size where n is the no of vertices.

&therefore; the matrix is of (6 x 6) size.

If there is no loop then the diagonal elements are 0.

If the graph is undirected then the matrix is symmetric, and all the connection are to and fro.

**Example:**

      1 2 3 4 5 6
    1[0 1 1 0 0 0]
    2[1 0 0 1 0 0]
    3[1 0 0 1 1 1]
    4[0 1 1 0 1 0]
    5[0 0 1 1 0 1]
    6[0 0 1 0 1 0]

&therefore; this is the adjacency matrix of the above graph.

Space Complexity for the adjacency matrix is &theta;(n^2^), where n is the no of vertices.

**Adjacency List:**

In adjacency list, we have an array of linked list.

In this, every vertice is represented by a linked list, and it contains all the vertices that are connected to it.

**Example:**

    1->2->5
    2->3->4->5
    3->2->4->5
    4->2->3->5->6
    5->2->4->3
    6->4

&therefore; this is the adjacency list of the above graph.

Space Complexity for the adjacency list is &theta;(n+2e), where n is the no of vertices and e is the no of edges.

`Using adjacency matrix is better when the given graph is dense, and using adjacency list is better when the given graph is sparse.`

## Graph Traversal ##

There are two ways to traverse a graph:

    1. Breadth First Search (BFS)
    2. Depth First Search (DFS)

**Breadth First Search (BFS):**

- It is also known as `level order` traversal.

- In this method we can start traversing from any node, until a particular node is given as the root node.

- We use a queue to implement this method.

- `Queue` is a `FIFO` data structure.

- We need to visit the nearest nodes first, and then the farthest nodes.

- We use a queue to keep track of the nodes that are to be visited.

- Time Complexity of BFS is O(n), where n is the no of vertices.

**Example:**

![BFS](https://upload.wikimedia.org/wikipedia/commons/thumb/4/46/Animated_BFS.gif/220px-Animated_BFS.gif)

**Depth First Search (DFS):**

- In this method we stack to implement this method.
- `Stack` is a `LIFO` data structure.
- We need to visit the farthest nodes first, and then the nearest nodes.
- We use a stack to keep track of the nodes that are to be visited.
- We can start traversing from any node, until a particular node is given as the root node.
- We can use recursion to implement this method.
- Time Complexity of DFS is O(n), where n is the no of vertices.

## Dijkstra's Algorithm ##

- It is used to find the shortest path from a source node to all the other nodes in a graph.
- Initially we set the distance of the source node to 0 and all the other nodes to infinity. We also set the source node as the current node.
- We then find the distance of all the adjacent nodes from the current node and update the distance of the adjacent nodes if the distance of the current node + the distance of the adjacent node is less than the distance of the adjacent node.
- We then mark the current node as visited and set the node with the least distance as the current node.
- We repeat the above steps until all the nodes are visited.

**Example:**

![Dijkstra's Algorithm](https://upload.wikimedia.org/wikipedia/commons/5/57/Dijkstra_Animation.gif)

The time complexity of Dijkstra's Algorithm is O(n^2^), where n is the no of vertices.

The table created in the algorithm is called the `Shortest Path Table`.
 