#include<bits/stdc++.h>
using namespace std;
int main(){
	float sum = 0, size, nums[100], avg; 
	cin >> size;
	for(int i = 0; i < size; i++){	
		cin >> nums[i];
		sum += nums[i];
	}
	avg = sum / size;
	for(int i = 0; i < size; i++)
		if(nums[i] > avg)
			cout << nums[i] << ' ';
	return 0;
}
