#include<bits/stdc++.h>
using namespace std;
#define MAXNUM 100
int main(){
	int n, num[MAXNUM], j; //297
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> num[i];
	for(int i = 0; i < n; i++){
		for(j = i+1; j < n; j++)
			if(num[j] >= num[i])
				break;
		if(j == n)
			cout << num[i] << ' ';
	}
	return 0;
}
