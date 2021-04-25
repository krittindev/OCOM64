#include<bits/stdc++.h>
using namespace std;
int main(){
	int size, num, digits[10] = {0};
	cin >> size;
	for(int i = 0; i < size ; i++){
		cin >> num;
		digits[num%10]++;
	}
	for(int i = 0; i < 10; i++)
		cout << i << ':' << digits[i] << '\n';
	return 0;
}
