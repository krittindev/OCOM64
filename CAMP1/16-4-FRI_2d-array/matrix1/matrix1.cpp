#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, n;
	cin >> m >> n;
	int mtx[m][n];
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			scanf("%d", &mtx[i][j]);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++)
			printf("%d ", mtx[j][i]);
		printf("\n");
	}
	return 0;
}
