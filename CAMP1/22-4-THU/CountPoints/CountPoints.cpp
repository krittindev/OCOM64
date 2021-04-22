#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, n, temp, count = 0;
	cin >> m >> n;
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++){
			cin >> temp;
			count += temp;
		}
	cout << count;
	return 0;
}
