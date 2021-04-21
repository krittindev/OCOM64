#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, temp;
	set<int> s;
	cin >> n;
	while(n--){
		cin >> temp;
		s.insert(temp);
	}
	auto mx = s.end();
	auto mn = s.begin();
	mx--;
	cout << "Max = " << *mx << " Min = " << *mn;
	return 0;
}
