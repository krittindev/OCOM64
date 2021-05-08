#include<bits/stdc++.h>
using namespace std;
int main(){
	float n, num[100], sum, csum, counter = 0, k, l;
	cin >> n >> k;
	for(int i = 0; i < n; i++)
		cin >> num[i];
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			sum = 0;
			csum = 0;
			for(int l = i; l<=j; l++){
                printf("%2.0f  ", num[l]);
				sum += num[l];
				csum++;
			}
			counter += (sum/csum < k)? 1:0;
            printf("  %5.2f %4.0f\n", sum/csum, counter);
		}
	}
	cout << counter;
	return 0;
}
