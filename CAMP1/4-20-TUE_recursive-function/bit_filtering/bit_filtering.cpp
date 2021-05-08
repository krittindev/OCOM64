#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, n;
	cin >> m >> n;
	string str[m];
	for(int i = 0; i < m; i++)
		cin >> str[i];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++)
			if(str[i][j] == '0')
				cout << ' ';
			else
				cout << str[i][j];
		cout << endl;
	}
	return 0;
}
