#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, n, temp, counter = 0;
	vector<vector<int>> vec;
	cin >> m >> n;
	for(int i = 0; i < m; i++){
		vector<int> tvec;
		for(int j = 0; j < n; j++){
			scanf("%d", &temp);
			counter += temp;
			tvec.push_back(temp);
		}
		vec.push_back(tvec);
	}
	cout << m * n - counter << endl << counter << endl;
	for(vector<int> v: vec){
		for(int w: v)
			cout << w << ' ';
		cout << endl;
	}
	return 0; 
}
