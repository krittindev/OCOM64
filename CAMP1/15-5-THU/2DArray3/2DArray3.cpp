#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, temp, sum, isY = 1;
	cin >> n;
	int a3[n][n], a2[n*2];
	for(int i = 0; i < n; i++){
		sum = 0;
		for(int j = 0; j < n; j++){
			cin >> temp;
			sum += temp;
			a3[i][j] = temp;
		}
		a2[i] = sum;
	}
	for(int i = 0; i < n; i++){
		sum = 0;
		for(int j = 0; j < n; j++)
			sum += a3[j][i];
		a2[n+i] = sum;
	}
	for(int i = 1; i < n*2; i++)
		if(a2[0] != a2[i]){
			isY = 0;
			break;
		}
	if(isY)
		cout << 'Y' << '\n' << a2[0];
	else 
		cout << 'N';
	return 0;
}
