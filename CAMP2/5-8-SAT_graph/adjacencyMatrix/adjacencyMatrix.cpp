#include<bits/stdc++.h>
using namespace std;
int main(){
	int num_nodes, num_edges,
	    i, j, u, v;

	cin >> num_nodes >> num_edges;

	int adj_matrix[num_nodes][num_nodes];

	for (int i = 0; i < num_edges; i++){
		cin >> u >> v;

		adj_matrix[u][v] = 1;
		adj_matrix[v][u] = 1;
	}

	for (int i = 0; i < num_nodes; i++){
		for (int j = 0; j < num_nodes; j++)
			cout << adj_matrix[i][j] << ' ';
		cout << endl;
	}

	return 0;
}
