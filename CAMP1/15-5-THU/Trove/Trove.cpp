#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, isT = 1;
	cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> a[i][j];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			isT = isT&(a[i][j] == a[j][i]);
	cout << (isT? "Yes" : "No");
	return 0;
}
