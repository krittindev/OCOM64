#include<bits/stdc++.h>
using namespace std;
int main(){
	int n[4];
	for(int i = 0; i < 4; i++)
		cin >> n[i];
	while(n[0]|n[1]|n[2]|n[3]){
		cout << 360*3 + (((n[0]-n[1])+40)%40 + ((n[2]-n[1])+40)%40 +  ((n[2]-n[3])+40)%40)*9 << endl;  
		for(int i = 0; i < 4; i++)
			cin >> n[i];
	}
	return 0;
}
