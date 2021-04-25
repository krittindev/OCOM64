#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a, b, c, counter = 0;
	cin >> n >> a >> b;
	for(int i = 2; i < n; i++){
		cin >> c;
		counter += (a<b && b<c)? 1: 0;
		a = b;
		b = c;
	}
	cout << counter;
	return 0;
}
