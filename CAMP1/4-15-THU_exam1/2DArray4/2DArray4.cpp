#include<bits/stdc++.h>
using namespace std;
#define MAXC 1000
int main(){
	int a, b, c[MAXC] = {0}, temp;
	cin >> a >>b;
	for(int i = 0; i < a * b; i++){
		cin >> temp;
		c[temp]++;
	}
	for(int i = 0; i < MAXC; i++)
		if(c[i])
			cout << i << ": " << c[i] << '\n';
	return 0;
}
