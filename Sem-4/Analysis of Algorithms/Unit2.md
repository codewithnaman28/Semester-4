# Unint 2 #

## Greedy Algorithms ##

- Dijkstra's algorithm for fnding the shortest path in a graph.

        - Always takes the shortest edge connecting a known node to an unknown node.
- Kruskal's algorithm for finding the minimum-cost spanning tree in a graph.

        - Always tries the lowest-cost remaining edge.
- Prim's algorithm for finding a minimum cost spanning tree.

        - Always takes the lowest-cost edge between nodes in the spanning tree and nodes not yet in the spanning tree.

## Job Sequencing with Deadlines ##

The problem is stated as below:

- There are n jobs to be processed on a machine.
- Each job i has a deadline di>=0 and a profit pi>=0.
- Pi is earned if the job is completed by its deadline.
