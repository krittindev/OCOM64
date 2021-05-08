#include<bits/stdc++.h>
using namespace std;
int main(){
	int num_nodes, num_edges,
	    i, j, u, v;

	cin >> num_nodes >> num_edges;

	vector<int> adj_list[num_nodes];

	for (int i = 0, u, v; i < num_edges; i++){
		cin >> u >> v;

		adj_list[u].push_back(v);
		adj_list[v].push_back(u);
	}

	for (int i = 0; i < num_nodes; i++){
		cout << "Adjecency list of vertex " << i << " head";

		for (auto x: adj_list[i])
			cout << "->" << x;
		
		cout << endl;
	}

	return 0;
}
