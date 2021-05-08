#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100], b[100], sizeA, sizeB, isfound = 0;
	cin >> sizeA;
	for(int i = 0; i < sizeA; i++)
		cin >> a[i];
	cin >> sizeB;
	for(int i = 0; i < sizeB; i++)
		cin >> b[i];
	for(int i = 0; i < sizeA; i++)
		for(int j = 0; j < sizeB; j++)
			if(a[i] == b[j]){
				isfound = 1;
				cout << a[i] << ' ';
				break;
			}
	if(!isfound)
		cout << "{}";
	return 0;
}
