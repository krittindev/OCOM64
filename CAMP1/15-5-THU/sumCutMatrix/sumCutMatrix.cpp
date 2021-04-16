#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c, d, temp, sum = 0;
	cin >> a >> b >> c >> d;
	for(int i = 0; i < c; i++)
		for(int j = 0; j < d; j++){
			cin >> temp;
			sum += (i+1!=a&&j+1!=b)? temp: 0;
		}
	cout << sum;
	return 0;
}
