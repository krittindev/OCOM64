#include<bits/stdc++.h>
using namespace std;
int main(){
	int size, i;
	cin >> size;
	int nums[size];
	for(i=0; i<size; i++)
		cin>> nums[i];
	for(i=size-1; i>-1; i--)
		cout << nums[i] << ' ';
	return 0;
}
