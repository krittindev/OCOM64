#include<bits/stdc++.h>
using namespace std;
int main(){
	int nums[10], cOdd = 0, cEven = 0;
	for(int i = 0; i < 10; i++){
		cin >> nums[i];
		cOdd += nums[i]&1? 1: 0;
		cEven += nums[i]&1? 0: 1;
	}
	cout << cEven << "  " << cOdd;
	return 0;
}
