#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, sum;
	cin >> n;
	int a[n][n], b[n][n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			scanf("%d", &b[i][j]);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			sum = 0;
			for(int k = 0; k < n; k++)
				sum += a[i][k] * b[k][j];
			printf("%d ", sum);
		}
		printf("\n");
	}
	return 0;
}
