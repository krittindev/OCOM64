#include<bits/stdc++.h>
using namespace std;
int main(){
	int size, nums[100], sum = 0;
	cin >> size;
	for(int i = 0; i < size; i++){
		cin >> nums[i];
		sum += nums[i];
	}
	for(int i = 0; i < size; i++)
		cout << sum - nums[i] << ' ';
	return 0;
}
