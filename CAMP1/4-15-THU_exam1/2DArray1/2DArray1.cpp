#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, counter = 0;
	cin >> a >> b;
	int c[a][b];
	for(int i = 0; i < a; i++)
		for(int j = 0; j < b; j++){
			scanf("%d", &c[i][j]);
			counter += c[i][j];
		}
	cout << a * b - counter << '\n' << counter << '\n';
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++)
			cout << c[i][j] << ' ';
		cout << '\n';
	}
	return 0;
}
