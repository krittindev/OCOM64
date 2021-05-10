#include<bits/stdc++.h>
using namespace std;

struct edge {
    int weight, src, dest;
    bool operator <(const edge &a) const {
        return weight>a.weight;
    }
    bool operator ==(const edge &a) const {
        return a.src == src && a.dest == dest;
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
    vector<edge> Q1;
    int nodesN, edgesN,
        x, y, weight,
        minimumcost, countEdge,
        q, qs;
    edge a;

    cin >> nodesN >> edgesN >> q;

    int root[3000];
    edge currentEdge;

    for (int i = 0; i < edgesN; i++) {
        cin >> x >> y >> weight;
        a.weight = weight;
        a.src = x;
        a.dest = y;
        V.push_back(a);
    }

    while (q--){
        cin >> qs;

        switch(qs){
            case 1:
                cin >> x >> y;
                a.weight = 0;
                a.src = x;
                a.dest = y;
                Q1.push_back(a);
                break;
            case 2:
                cin >> x >> y;
                a.weight = 0;
                a.src = x;
                a.dest = y;
                Q1.erase(remove(Q1.begin(), Q1.end(), a), Q1.end());
                break;
            case 3:

                if(Q1.size() != 0){
                    for (int i = 0; i < edgesN; i++)
                        for (int j = 0; j < Q1.size(); j++)
                            if(V[i].src != Q1[j].src || V[i].dest != Q1[j].dest)
                                Q.push(V[i]);
                            else{
                                Q.push(Q1[j]);
                            }
                }
                else{
                    for (int i = 0; i < edgesN; i++)
                        Q.push(V[i]);
                }

                for (int i = 0; i <= nodesN; i++)
                    root[i] = i;

                minimumcost = 0;
                countEdge = 0;


                while (countEdge < nodesN-1 && !Q.empty()) {
                    /*
                    cout << "Q.size : " << Q.size() << " , member : ";
                    for (int i = 1; i <= nodesN; i++)
                        cout << root[i] << ' ';
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
                break;
        }

    }
    return 0;
}
