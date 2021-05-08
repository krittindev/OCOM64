#include<bits/stdc++.h>
using namespace std;

int main (){
	int n;

	cin >> n;

	int adj[n][n], stt[n];
	memset(adj, 0, sizeof(int)*n*n);
	
	for (int i = 0; i < n - 1; i++){
		int u, v;
		
		cin >> u >> v;

		adj[u - 1][v - 1] = 1;
		adj[v - 1][u - 1] = 1;
	}

	for (int i = 0; i < n; i++){
		int temp;

		cin >> temp;

		stt[i] = temp;
	}

	//*
	cout << endl;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
			cout << adj[i][j] << ' ';
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < n; i++)
		cout << stt[i] << ' ';
	cout << endl;

	//*/

	int max_c = 0;
	
	for (int i = 0; i < n; i++){
		int sum = 0;

		for (int j = 0; j < n; j++)
			if(i == j || (adj[i][j] == 1 && stt[j] == 0))
				sum++;
		max_c = max(max_c, sum);
	}
	
	cout << max_c;

	return 0;
}

