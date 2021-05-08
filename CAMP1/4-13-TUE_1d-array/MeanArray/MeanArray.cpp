#include<bits/stdc++.h>
using namespace std;
int main(){
	float n, num[100], sum, csum, counter = 0, k;
	cin >> n >> k;
	for(int i = 0; i < n; i++)
		cin >> num[i];
	for(int i = 0; i < pow(2, n)-1; i++){
		sum = 0;
		csum = 0;
		for(int j = 0; j < n; j++){
			if(i&(1<<j)){
				csum++;
				sum += num[j];
				//printf("%5.0f", num[j]);
			}
		}
		counter += sum/csum < k? 1: 0;
		//printf("%5.2f%5.0f\n", sum/csum, counter);
	}
	cout << counter; 
	return 0;
}
