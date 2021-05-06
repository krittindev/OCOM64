#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, b[9] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
	cin >> n;
	for(int i = 0; i < 9; i++){
		cout << n/b[i] << ' ';
		n %= b[i];
	}
	return 0;
}
