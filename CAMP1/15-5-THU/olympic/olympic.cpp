#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, rank = 1;
	float w[3], num[1000], sum, temp;
	cin >> n >> w[0] >> w[1] >> w[2];
	for(int i = 0; i < n; i++){
		sum = 0;
		for(int j = 0; j < 3; j++){
			cin >> temp;
			sum += temp * w[j];
		}
		num[i] = sum;
	}

	for(int i = 1; i < n; i++)
		if(num[i] > num[0])
			rank++;
	cout << rank;
	return 0;
}
