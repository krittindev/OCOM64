#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, n, temp;
	cin >> m >> n;
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++){
			cin >> temp;
			if(temp) cout << '(' << j << ',' << i << ')' << ' ';
		}
	return 0;
}
