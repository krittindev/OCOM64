#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,p,a[50][50],b[50][50],sum;
	cin >> m >> n;
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			cin >> a[i][j];
	cin >> p;
	for(int i = 0; i < p; i++)
		for(int j = 0; j < p; j++)
			cin >> b[i][j];
	for(int i = 0; i < 1+m-p; i++){
		for(int j = 0; j < 1+n-p; j++){
			sum = 0;
			for(int k = 0; k < p; k++)
				for(int l = 0; l < p; l++)
					sum += b[k][l]*a[k+i][l+j];
			cout << sum << ' ';
		}
		cout << '\n';
	}
	return 0;
}
