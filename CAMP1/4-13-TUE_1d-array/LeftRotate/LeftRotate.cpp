#include<bits/stdc++.h>
using namespace std;
int main(){
	int r, size, nums[100];
	cin >> r >> size;
	for(int i = 0; i < size; i++)
		cin >> nums[i];
	for(int i = 0; i < size; i++)
		cout << nums[(i+r)%size] << ' ';
	return 0;
}
