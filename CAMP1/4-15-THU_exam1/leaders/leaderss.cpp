#include<bits/stdc++.h>
using namespace std;
#define MAXNUM 100
int main(){
	int n, num[MAXNUM], newnum[MAXNUM], i, j, k ,maxn; //137
	cin >> n;
	for(i = 0; i < n; i++)
		cin >> num[i];
    k=100;
	maxn = num[n-1];
	newnum[--k] = maxn;
	for(i = n-2 ; i > -1; i--){
        if(num[i] > maxn){
            maxn = num[i];
            newnum[--k] = num[i];
        }
	}
	for(i = k; i < 100; i++)
        cout << newnum[i] << ' ';
	return 0;
}
