#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, r, d, e;
	cin >> n;
	while(n--){
		cin >> r >> d;
		for(int i = pow(10, floor(log10(d))); i!=0; i/=10){
			cout << (d / i + r) % 10; 
		}
		cout << '\n';	
	}
	return 0;
}
