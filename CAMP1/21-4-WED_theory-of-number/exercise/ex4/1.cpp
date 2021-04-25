#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, d;
	cin >> a >> b >> d;
	int a1 = a + a%4, an = b - b%4, n = (an - a1)/d + 1;
	cout << n;
	return 0;
}
