#include<bits/stdc++.h>
using namespace std;
int main(){
	int n[4];
	for(int i = 0; i < 4; i++)
		cin >> n[i];
	while(n[0]|n[1]|n[2]|n[3]){
		int sum = - n[0] + n[1] - n[2] + n[3];
		cout << sum*90/4 << endl;
		for(int i = 0; i < 4; i++)
			cin >> n[i];
	}
	return 0;
}
