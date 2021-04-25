#include<bits/stdc++.h>
using namespace std;
int main(){
	int temp, arr[3];
	for(int i = 0; i < 3; i++)
		cin >> arr[i];

	sort(arr, arr + 3);

	if(arr[1]-arr[0] > arr[2]-arr[1])
		cout << arr[0]-arr[1]+arr[2];
	else if(arr[1]-arr[0] < arr[2]-arr[1])
		cout << arr[1]+arr[1]-arr[0];
	else
		cout << arr[2]+arr[1]-arr[0];
	return 0;
}
