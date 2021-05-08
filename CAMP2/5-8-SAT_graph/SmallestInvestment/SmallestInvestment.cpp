#include<bits/stdc++.h>
using namespace std;
int main (){
	int n, m;

	cin >> n >> m;

	int adj[n][n];
	memset(adj, 0, sizeof(int)*n*n);

	for (int i = 0; i < m; i++){
		int x, y, z;
		
		cin >> x >> y >> z;

		adj[x - 1][y - 1] = z;
		adj[y - 1][x - 1] = z;
	}
	
	int min_price = INT_MAX, min_i; 
	for (int i = 0; i < n; i++){
		int sum = 0;

		for (int j = 0; j < n; j++)
			sum += adj[i][j];

		if(min_price > sum){
			min_i = i;
			min_price = sum;
		}
	}

	printf("%d %.2f", min_i + 1, (float)min_price / 2 * 5);

	return 0;
}

