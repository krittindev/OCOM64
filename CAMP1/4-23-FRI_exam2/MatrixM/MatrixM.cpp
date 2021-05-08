#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int m[n][n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> m[i][j];
	for(int k = 0; k < n; k++){
		m[k][k] = 1;
		for(int i = 0; i < n; i++)
			if(i!=k)
				m[k][k] = m[k][k] & m[i][k] & !m[k][i];
	}
	for(int k = 0; k < n; k++)
		if(m[k][k] == 1){
			cout << k+1;
			return 0;
		}
	cout << -1;
	return 0;
}
