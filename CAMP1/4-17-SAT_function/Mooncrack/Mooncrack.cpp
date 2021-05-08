#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, n, i, j;
	cin >> m >> n;
	int a[m][n];
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			cin >> a[i][j];
	i = 0, j = 0;
	while(i < m && j < n){
		cout << a[i][j] << ' ';
		if(i != m-1){
			if(j != m-1)
				if(a[i][j+1] < a[i+1][j])
					j++;
				else
					i++;
			else
				i++;
		}
		else
			j++;
	}
	return 0;
}
