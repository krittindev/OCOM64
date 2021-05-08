#include<bits/stdc++.h>
using namespace std;
int main(){
	int search, size, nums[100];
	cin >> search >> size;
	for(int i=0; i<size; i++){
		cin >> nums[i];
		if(nums[i] == search){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
