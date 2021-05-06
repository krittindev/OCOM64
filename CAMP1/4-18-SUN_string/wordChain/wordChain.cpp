#include<bits/stdc++.h>
using namespace std;
int main(){
	int l, n, sum;
	string s1, s2;
	cin >> l >> n;
	cin >> s1;
	for(int i = 1; i < n; i++){
		cin >> s2;
		sum = 0;
		for(int j = 0; j < l; j++)
			if(s1[j] != s2[j])
				sum++;
		if(sum > 2){
			cout << s1;
			return 0;
		}
		s1 = s2;
	}
	cout << s2;
	return 0;
}
