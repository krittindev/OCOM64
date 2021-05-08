#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, n, p, sum, temp;
	cin >> m >> n;
	while(m--){
		sum = 0;
		p = n;
		while(p--){
			cin >> temp;
			sum += temp;
		}
		cout << sum << endl;
	}
	return 0;
}
