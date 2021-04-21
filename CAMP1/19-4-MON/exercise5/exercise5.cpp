#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int d1 = b - a, d2 = c - b, r1 = b / a, r2 = c / b;
	if(d1 == d2)
		cout << "arithmetic sequence";
	else if(r1 == r2)
		cout << "geometry sequence";
	else
		cout << "not arithmetic nor geometry sequence";
	return 0;
}
