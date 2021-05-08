#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	vector<vector<int>> vec;
	vector<int> sumvec;
	cin >> n;
	for(int i = 0; i < n; i++){
		vector<int> tvec;
		int temp, sum = 0;
		for(int j = 0; j < n; j++){
			cin >> temp;
			sum += temp;
			tvec.push_back(temp);
		}
		vec.push_back(tvec);
		sumvec.push_back(sum);
	}
	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int j = 0; j < n; j++)
			sum += vec[j][i];
		sumvec.push_back(sum);
	}
	for(int v: sumvec)
		if(sumvec[0] != v){
			cout << "N";
			return 0;
		}
	cout << "Y" << endl << sumvec[0];
	return 0;
}
