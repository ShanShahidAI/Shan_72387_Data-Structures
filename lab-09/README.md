# Lab 09 — Graph BFS & DFS

**Student:** Shan  
**SAP ID:** 72387  
**Course:** Data Structures & Algorithms

## Files
- `Graph_BFS_DFS.cpp` — uploaded C++ implementation.
- The original report was provided separately in this conversation; it is not included in this commit.

## Topics covered
- Undirected graph represented with an adjacency list (`list<int>`).
- Breadth-First Search (BFS) using `queue<int>`.
- Depth-First Search (DFS) using recursive helper `DFSUtil`.
- Visited array to avoid revisiting vertices.
- Menu to run BFS, DFS, print the adjacency list, or exit.
- 1-based vertex numbering in the uploaded C++ source.

## Build
```bash
g++ -std=c++11 Graph_BFS_DFS.cpp -o graph-bfs-dfs
./graph-bfs-dfs
```

## Source/report consistency note
The uploaded PDF identifies the work as **Week 14** and its printed code uses zero-based vertex numbering (`0` through `v-1`). The separately uploaded `Graph BFS DFS.cpp` uses one-based numbering (`1` through `n`) and validates entered vertices. The source file is preserved as submitted; this difference has not been silently reconciled.

## Review notes
- The source compiled successfully with `g++ -std=c++11 -Wall -Wextra -pedantic`.
- BFS and DFS start from the selected vertex and visit only vertices reachable from that start. Disconnected components are not traversed by these methods in the current implementation.
- The constructor allocates `v+1` adjacency lists to support the 1-based indices used by the source.
- Input validation covers edge endpoints and the starting vertex. The code assumes numeric input and a positive vertex count.
