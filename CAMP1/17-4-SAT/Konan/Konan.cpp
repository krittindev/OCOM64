#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, n, a, b;
	cin >> m >> n >> a >> b;
	string str[m];
	for(int i = 0; i < m; i++)
		cin >> str[i];
	for(int i = 0; i < m; i++)
		for(int j = 0; j < a; j++){
			for(int k = 0; k < n; k++)
				for(int l = 0; l < b; l++)
					cout << str[i][k];
			cout << endl;
		}
	return 0;
}
