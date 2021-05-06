#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, max = INT_MIN, c=1, temp;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> temp;
		if(max < temp){
			max = temp;
			c = 1;
		}else if(max == temp)
			c++;
	}
	cout << c;
	return 0;
}
