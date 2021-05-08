#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string temp;
	map<string,int> capital;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> temp;
		if(capital.find(temp) != capital.end())
			capital[temp]++;
		else
			capital[temp] = 1;
	}
	for(auto &it: capital)
		cout << it.first << ' ' << it .second << endl;
	return 0;
}
