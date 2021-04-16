#include<bits/stdc++.h>
using namespace std;
int main(){
	int nums[10], sumOdd = 0, sumEven = 0;
	for(int i = 0; i < 10; i++){
		cin >> nums[i];
		sumOdd += nums[i]&1? nums[i]: 0;
		sumEven += nums[i]&1? 0: nums[i];
	}
	cout << sumEven << "  " << sumOdd;
	return 0;
}
