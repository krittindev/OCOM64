#include<bits/stdc++.h>
using namespace std;
float min(float a[], int n);
float max(float a[], int n);
float mean(float a[], int n);
int main (){
	int n;
	cin >> n;
	float a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	cout << min(a, n) << endl;
	cout << max(a, n) << endl;
	printf("%.2f", mean(a, n));
	return 0;
}
float min(float a[], int n){
	float m = a[0];
	for(int i = 1; i < n; i++)
		if(m > a[i])
			m = a[i];
	return m;
}
float max(float a[], int n){
	float m = a[0];
	for(int i = 1; i < n; i++)
		if(m < a[i])
			m = a[i];
	return m;
}
float mean(float a[], int n){
	float sum = 0;
	for(int i = 0; i < n; i++)
		sum += a[i];
	return sum / n;
}
