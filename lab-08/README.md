# Lab 08 — Graph Adjacency List

**Student:** Shan  
**SAP ID:** 72387  
**Course:** Data Structures & Algorithms

## Submitted material

- [Graph Adjacency List C++ source](Lab_12_Graph_Adjacency_List.cpp)
- [Lab report PDF](Lab_12_Report_Shan_72387.pdf) — compact re-rendered copy of the uploaded report's code and output content.

**Report naming note:** The uploaded PDF labels the work as **Week 11**, while the source filename begins with `Lab_12`. The repository folder is named `lab-08` to follow the sequence of lab folders in this repository.

## Task overview

The program represents an undirected graph with six vertices (`A`–`F`) using an array of C++ `list<int>` adjacency lists.

- `graph(int v)`: creates the adjacency-list array for the given vertex count.
- `addedge(char u_char, char v_char)`: converts character labels to zero-based indices and adds the edge in both directions.
- `printadjlist()`: prints each vertex and its neighbours.
- `~graph()`: releases the dynamically allocated adjacency-list array.

## Build and run

```bash
g++ -std=c++11 Lab_12_Graph_Adjacency_List.cpp -o graph-adjacency-list
./graph-adjacency-list
```

## Expected output

```text
Graph Adjacency List:
A : B D F
B : A D E
C : E F
D : A B E F
E : B D C F
F : A D E C
```

**Source preservation:** The submitted C++ source is stored as provided; no algorithm or code changes have been made.
