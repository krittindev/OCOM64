#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, temp;
	cin >> n >> m;
	vector<int> v;
	for(int i = 0; i < n; i++){
		cin >> temp;
		v.push_back(temp);
	}
	for(int i = 0; i < m; i++){
		cin >> temp;
		switch(temp){
			case 0:
				v.erase(v.begin(), v.begin() + 1);
				break;
			case -1:
				v.pop_back();
				break;
			case 1:
				cin >> temp;
				v.push_back(temp);
				break;
		}
	}
	for(int n: v)
		cout << n << endl;
	return 0;
}
