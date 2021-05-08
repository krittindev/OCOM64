#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, n, temp, max;
	cin >> m >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> temp;
		if(i)
			a[i] = a[i-1] + temp;
		else
			a[i] = temp;
	}
	max = a[m-1];
	for(int i = m; i < n; i++)
		max = (max < a[i] - a[i-m])? a[i] - a[i-m]: max;
	cout << max;
	return 0;
}
