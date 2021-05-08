#include<bits/stdc++.h>
using namespace std;
int main(){
	int num_nodes, num_edges, max_diff = 0, max_i;

	cin >> num_nodes >> num_edges;

	int adj_matrix[num_nodes][num_nodes];

    memset(adj_matrix, 0, sizeof(int)*num_nodes*num_nodes);

	for (int i = 0; i <num_edges; i++){
		int u, v;

		cin >> u >> v;

		adj_matrix[u - 1][v - 1] = 1;
	}

    /*
    cout << endl;
	for (int i = 0; i < num_nodes; i++){
		for (int j = 0; j < num_nodes; j++)
            cout << adj_matrix[i][j] << ' ';
        cout << endl;
	}//*/

	for (int i = 0; i < num_nodes; i++){
		for (int j = 0; j < num_nodes; j++)
			if(i != j)
				adj_matrix[i][i] += adj_matrix[i][j] - adj_matrix[j][i];
        if(max_diff <= abs(adj_matrix[i][i])){
            max_diff = max(max_diff, abs(adj_matrix[i][i]));
            max_i = i + 1;
        }
	}

	/*
    cout << endl;
	for (int i = 0; i < num_nodes; i++){
		for (int j = 0; j < num_nodes; j++)
            cout << adj_matrix[i][j] << ' ';
        cout << endl;
	}//*/

	cout << max_i;

	return 0;
}
