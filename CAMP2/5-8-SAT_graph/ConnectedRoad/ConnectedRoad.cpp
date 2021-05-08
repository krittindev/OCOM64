#include<bits/stdc++.h>
using namespace std;

bool sortBySec (const pair<int,int> &a, const pair<int,int> &b){
	return (a.second < b.second);
}

int main(){
	int n, m;

	cin >> n >> m;

	int adj[n][n];

 	memset(adj, 0, sizeof(int)*n*n);

	for (int i = 0; i < m; i++){
		int a, b, c;

		cin >> a >> b >> c;

		adj[a - 1][b - 1] += c;
	}

	/*
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
			cout << adj[i][j] << ' ';
		cout << endl;
	}//*/

	vector<pair<int,int>> price;

	for (int i = 0; i < n; i++){
		int first = i + 1, second = 0;

		for (int j = 0; j < n; j++)
			second += adj[i][j];

		price.push_back(make_pair(first, second));
	}
	
	sort(price.begin(), price.end(), sortBySec);

	for (auto x: price)
		cout << x.first << ' ' << x.second << endl;

	return 0;
}


