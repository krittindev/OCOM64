#include<bits/stdc++.h>
using namespace std;

struct edge {
    int weight, src, dest;
    bool operator <(const edge &a) const {
        return weight>a.weight;
    }
};

int getRoot(int v, int root[]) {
    if (root[v] == v)
        return v;
    return getRoot(root[v], root);
}

int main() {
    priority_queue <edge> Q;
    vector<edge> V;
    int nodesN, edgesN,
        x, y, weight,
        minimumcost, countEdge;
    edge a;

    cin >> nodesN >> edgesN;

    int root[3000];
    edge currentEdge;

    for (int i = 0; i < edgesN; i++) {
        cin >> x >> y >> weight;
        a.weight = weight;
        a.src = x;
        a.dest = y;
        V.push_back(a);
        /*
        V[i][0] = weight;
        V[i][1] = x;
        V[i][2] = y;
        //*/
    }

    for(int i = 0; i < edgesN; i++) {
        for (int j = 0; j <= 3000; j++)
            root[j] = j;

        /*
        minimumcost = 0;
        countEdge = 0;
        //*/


        minimumcost = V[i].weight;
        countEdge = 1;
        root[V[i].src] = V[i].dest;

        /*
        for (int j = 0; j <= edgesN; j++)
            Q.push(V[j]);
        //*/

        for (int j = 0; j < edgesN; j++)
            if(j != i)
                Q.push(V[j]);

        while (countEdge < nodesN-1 && !Q.empty()) {
            /*
            cout << "Q.size : " << Q.size() << " , member : ";
            for (int j = 1; j <= nodesN; j++)
                cout << root[j] << ' ';
            cout << endl;
            //*/
            currentEdge = Q.top();
            Q.pop();
            int p1 = getRoot(currentEdge.src, root);
            int p2 = getRoot(currentEdge.dest, root);
            if (p1 != p2) {
                countEdge++;
                root[p1] = p2;
                minimumcost += currentEdge.weight;
                //cout << "pushEdge : " << currentEdge.src << " " << currentEdge.dest<<endl;
            }
        }

        cout << minimumcost << endl;

    }
    return 0;
}
