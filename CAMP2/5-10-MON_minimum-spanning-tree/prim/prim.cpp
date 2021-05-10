/* Prim algorithm to find minimum spanning tree (in ubdirected
graph)*/
#include <iostream>
#include <queue>
#include <vector>
#define MAXNODES 100
using namespace std;

struct edge {
    int weight,node;
    bool operator <(const edge &a) const {
        return weight>a.weight;
    }
};

vector <edge> adj[MAXNODES];
priority_queue <edge> Q;
int nodesN,edgesN;

int prim(int x) {
    edge a;
    int idx;
    int cost = 0;
    int countNodes = 1;
    bool marked[MAXNODES] = {0};

    while (!adj[x].empty()) {
        a = adj[x].back();
        adj[x].pop_back();
        Q.push(a);
    }

    marked[x] = true;

    while (!Q.empty()) {
        a = Q.top();
        Q.pop();

        if (marked[a.node] == true) continue;

        cost += a.weight;
        marked[a.node] = true;
        countNodes++;

        if (countNodes== nodesN) return cost;
        idx = a.node;

        while (!adj[idx].empty()) {
            a = adj[idx].back();
            adj[idx].pop_back();
            Q.push(a);
        }
    }

    return cost;
}

int main() {
    int x,y,weight;
    int minimumcost;
    edge a;

    cin >> nodesN >> edgesN;

    for (int i=0; i<edgesN; i++) {
        cin >> x >> y >> weight;
        a.weight = weight;
        a.node = x;
        adj[y].push_back(a);
        a.node = y;
        adj[x].push_back(a);
    }
    minimumcost = prim(1);

    cout << minimumcost;
    return 0;
}
