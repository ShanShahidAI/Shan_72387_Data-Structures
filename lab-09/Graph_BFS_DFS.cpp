#include <iostream>
#include <list>
#include <queue>
using namespace std;

class graph
{
private:
    int v;
    list<int>* adj;

public:
    // Constructor (1-based indexing support ke liye v+1 size)
    graph(int v)
    {
        this->v = v;
        adj = new list<int>[v + 1];
    }

    // Add Edge (Undirected)
    void addEdge(int u, int w)
    {
        adj[u].push_back(w);
        adj[w].push_back(u);
    }

    // Print Adjacency List
    void printAdjList()
    {
        for(int i = 1; i <= v; i++)
        {
            cout << i << " -> ";
            for(int neigh : adj[i])
            {
                cout << neigh << " ";
            }
            cout << endl;
        }
    }

    // BFS Algorithm
    void BFS(int start)
    {
        bool* visited = new bool[v + 1]();
        queue<int> q;

        visited[start] = true;
        q.push(start);

        cout << "BFS Traversal: ";

        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for(int neigh : adj[node])
            {
                if(!visited[neigh])
                {
                    visited[neigh] = true;
                    q.push(neigh);
                }
            }
        }

        delete[] visited;
        cout << endl;
    }

    // DFS Helper Function
    void DFSUtil(int node, bool visited[])
    {
        visited[node] = true;
        cout << node << " ";

        for(int neigh : adj[node])
        {
            if(!visited[neigh])
            {
                DFSUtil(neigh, visited);
            }
        }
    }

    // DFS Algorithm
    void DFS(int start)
    {
        bool* visited = new bool[v + 1]();
        cout << "DFS Traversal: ";
        DFSUtil(start, visited);
        delete[] visited;
        cout << endl;
    }

    // Destructor
    ~graph()
    {
        delete[] adj;
    }
};

int main()
{
    int n, e, u, w, start, choice;

    cout << "Enter total number of vertices: ";
    cin >> n;
    cout << "(Vertices allowed: 1 se " << n << " tak)\n\n";

    graph g(n);

    cout << "Enter total number of edges: ";
    cin >> e;

    // Har edge ka input alag-alag line par
    for(int i = 1; i <= e; i++)
    {
        cout << "\n--- Edge " << i << " ---\n";
        cout << "Pehla vertex enter karein (1 to " << n << "): ";
        cin >> u;
        cout << "Doosra vertex enter karein (1 to " << n << "): ";
        cin >> w;

        if(u >= 1 && u <= n && w >= 1 && w <= n)
        {
            g.addEdge(u, w);
        }
        else
        {
            cout << "Ghalat input! Sirf 1 se " << n << " ke darmiyan number dein.\n";
            i--; // Dobara yahi edge poochne ke liye
        }
    }

    cout << "\nAdjacency List:\n";
    g.printAdjList();

    // Starting vertex validation
    while(true)
    {
        cout << "\nEnter starting vertex (1 to " << n << "): ";
        cin >> start;
        if(start >= 1 && start <= n)
            break;
        cout << "Ghalat vertex! 1 se " << n << " ke darmiyan number dein.\n";
    }

    do
    {
        cout << "\n===== GRAPH MENU =====";
        cout << "\n1. BFS Traversal";
        cout << "\n2. DFS Traversal";
        cout << "\n3. Print Adjacency List";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                g.BFS(start);
                break;

            case 2:
                g.DFS(start);
                break;

            case 3:
                g.printAdjList();
                break;

            case 4:
                cout << "Program Exited!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}
