#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, sum, temp;
	cin >> a >> b;
	while(a--){
		sum = 0;
		for(int i = 0; i < b; i++){
			cin >> temp;
			sum += temp;
		}
		cout << sum << '\n';
	}
	return 0;
}
