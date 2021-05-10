/* Prim algorithm to find minimum spanning tree (in ubdirected
graph)*/
#include<bits/stdc++.h>
#define MAXNODES 10000
using namespace std;

struct edge {
    int weight,node;
    bool operator <(const edge &a) const {
        return weight>a.weight;
    }
};

int prim(int x, int &nodesN, vector <edge> adj[]) {
    priority_queue <edge> Q;
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
    vector <edge> adj[MAXNODES];
    int nodesN,edgesN;

    int x,y;
    int minimumcost;
    edge a;

    cin >> nodesN >> edgesN;

    int arr[nodesN][nodesN];
    memset(arr, 0, sizeof(int)*nodesN*nodesN);

    /*
    cout << endl;
    for (int i = 0; i < nodesN; i++) {
        for (int j = 0; j < nodesN; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }//*/

    for (int i = 0; i < edgesN; i++) {
        cin >> x >> y;
        arr[x - 1][y - 1]++;
        arr[y - 1][x - 1]++;
    }

    /*
    cout << endl;
    for (int i = 0; i < nodesN; i++) {
        for (int j = 0; j < nodesN; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }//*/

    for (int i=0; i<nodesN; i++) {
        for (int j = 0; j < nodesN; j++) {
            a.weight = arr[i][j];
            a.node = j + 1;
            adj[i + 1].push_back(a);
        }
    }

    minimumcost = prim(1, nodesN, adj);

    cout << minimumcost;
    return 0;
}
