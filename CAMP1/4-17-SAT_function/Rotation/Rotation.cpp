#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, r;
	cin >> m >> r;
	string str[m];
	for(int i = 0; i < m; i++)
		cin >> str[i];
	switch(r/90){
		case 1:
			for(int i = 0; i < m; i++){
				for(int j = 0; j < m; j++)
					cout << str[m-1-j][i];
				cout << endl;
			}
			break;
		case 2:
			for(int i = 0; i < m; i++){
				for(int j = 0; j < m; j++)
					cout << str[m-1-i][m-1-j];
				cout << endl;
			}
			break;
		case 3:
			for(int i = 0; i < m; i++){
				for(int j = 0; j < m; j++)
					cout << str[j][m-1-i];
				cout << endl;
			}
			break;
	}
	return 0;
}
