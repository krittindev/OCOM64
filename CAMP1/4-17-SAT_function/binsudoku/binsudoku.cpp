#include<bits/stdc++.h>
using namespace std;
int main(){
	int sum[9] = {0};
	string l;
	vector<int> odd, even;

	for(int i = 0; i < 9; i++){
		cin >> l;
		for(int j = 0; j < 9; j++)
			if(l[j] == '1')
				sum[3*(i/3)+(j/3)]++;
	}

	for(int i = 0; i < 9; i++)
		if(sum[i]&1)
			odd.push_back(i+1);
		else
			even.push_back(i+1);

	for(int i: even)
		cout << i << ' ';
	if(even.size())
		cout << endl;
	for(int i: odd)
		cout << i << ' ';

	return 0;
}
