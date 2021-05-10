/* Kruskal algorithm to find minimum spanning tree (in ubdirected graph)
Cycle detection using union find algorithm */
#include <iostream>
#include <queue>
#include <vector>
#define MAXNODES 100
using namespace std;

struct edge {
    int weight,src,dest;
    bool operator <(const edge &a) const {
        return weight>a.weight;
    }
};

priority_queue <edge> Q;
int nodesN,edgesN;
int getParent(int v,int parent[]) {
    if (parent[v]==v) {
        return v;
    }
    return getParent(parent[v],parent);
}

int main() {
    int x,y,weight;
    int minimumcost = 0, countNode = 0;
    edge a;
    cin >> nodesN >> edgesN;
    int parent[nodesN];
    edge currentEdge;
    for (int i=0; i<edgesN; i++) {
        cin >> x >> y >> weight;
        a.weight = weight;
        a.src = x;
        a.dest = y;
        Q.push(a);
    }
    //Union find to detect cycle
    for (int i=0; i<=nodesN; i++) {
        parent[i] = i;
    }
    while (countNode<nodesN-1 && !Q.empty()) {
        currentEdge = Q.top();
        Q.pop();
        int p1 = getParent(currentEdge.src,parent);
        int p2 = getParent(currentEdge.dest,parent);
        if (p1!=p2) {
            countNode++;
            parent[p1] = p2;
            minimumcost += currentEdge.weight;
            // cout << currentEdge.src << " " << currentEdge.dest<<endl;
        }
    }
    cout << minimumcost;
    return 0;
}
