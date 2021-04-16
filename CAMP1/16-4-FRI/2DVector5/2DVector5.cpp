#include<bits/stdc++.h>
using namespace std;
int main(){
	int temp;
	vector<vector<int>> vec;
	while(1){
		int sum = 0;
		vector<int> tvec;
		cin >> temp;
		if(temp == 0)
			break;
		else if(temp>0)
			tvec.push_back(temp);
		else
			sum += temp;
		while(1){
			cin >> temp;
			if(temp == 0){
				if(sum!=0)
					tvec.push_back(sum);
				vec.push_back(tvec);
				break;
			}
			else if(temp>0)
				tvec.push_back(temp);
			else
				sum += temp;
		}
	}
	for(vector<int> i: vec){
		for(int j: i)
			cout << j << ' ';
		cout << endl;
	}
	return 0;
}
