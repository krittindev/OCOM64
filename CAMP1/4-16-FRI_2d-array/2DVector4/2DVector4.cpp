#include<bits/stdc++.h>
using namespace std;
#define MAXV 1000
int main(){
	int r, c;
	cin >> r >> c;
	vector<int> vec(MAXV, 0);
	for(int i = 0; i < r * c; i++){
		int temp;
		cin >> temp;
		vec[temp]++;
	}
	for(int i = 0; i < MAXV; i++)
		if(vec[i])
			printf("%d: %d\n", i, vec[i]);
	return 0;
}
