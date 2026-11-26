#include <iostream>
#include <list>
using namespace std;

class graph {
private:
    int v;
    list<int>* l;

public:
    graph(int v) {
        this->v = v;
        l = new list<int>[v];
    }

    void addedge(char u_char, char v_char) {
        int u = u_char - 'A'; // Convert vertex character ('A'-'F') to index (0-5)
        int v = v_char - 'A';

        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printadjlist() {
        for (int i = 0; i < v; i++) {
            cout << char('A' + i) << " : "; // Convert index back to character
            for (int neigh : l[i]) {
                cout << char('A' + neigh) << " ";
            }
            cout << endl;
        }
    }

    ~graph() {
        delete[] l;
    }
};

int main() {
    graph g(6);
    g.addedge('A', 'B');
    g.addedge('A', 'D');
    g.addedge('A', 'F');
    g.addedge('B', 'D');
    g.addedge('B', 'E');
    g.addedge('D', 'E');
    g.addedge('D', 'F');
    g.addedge('E', 'C');
    g.addedge('E', 'F');
    g.addedge('F', 'C');

    cout << "Graph Adjacency List:" << endl;
    g.printadjlist();

    return 0;
}
