#include<bits/stdc++.h>
using namespace std;
int arr[100000000] = {0};
int main(){
	int n, m, i, j, a, b, nc, sum = 0;
	cin>>n>>m;
	//int arr[n] = {0};
	for(i=0;i<m;i++){
		cin>>a>>b;
		for(j=a-1;j<b;j++)
			arr[j]++;
	}
	char c;
	cin>>c;
	nc = c=='R'? 0: c=='G'? 1: 2;
	for(i=0;i<n;i++){
		if(nc!=arr[i]%3){
			sum += ((nc-arr[i])%3+3)%3;
		}
	}
	cout<<sum;
	return 0;
}
