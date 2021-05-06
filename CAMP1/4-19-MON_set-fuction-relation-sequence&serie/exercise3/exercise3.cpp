#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, m;
	cin >> a >> b >> m;
	int a1 = a + (m - a%m), an = b - b%m, d = m;
	cout << (an - a1)/d + 1;
	return 0;
}
