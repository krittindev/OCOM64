#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;	
	cin >> n;
	float num[n], sum = 0, focusSum;
	for(int i = 0; i < n; i++){
		cin >> num[i];
		sum += num[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			focusSum = 0;
			for(int k = i; k <= j; k++)
				focusSum += num[k];
			if(focusSum/(1-i+j) > ( (n-1+i-j)? (sum - focusSum)/(n-1+i-j): 0))
				cout << i+1 << ' ' << j+1 << '\n';
		}
	}
	return 0;
}
