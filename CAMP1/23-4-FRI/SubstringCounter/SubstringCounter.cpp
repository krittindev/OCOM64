#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	string str;
	cin >> n;
	while(n--){
		cin >> str >> k;
		int count = 0;
		for(int i = 0; i < str.size() - k + 1; i++)
			for(int j = i + k - 1; j < str.size(); j++){
				set<char> setc;
				for(int l = i; l <= j; l++)
					setc.insert(str[l]);
				if(setc.size() == k)
					count++;
			}
		cout << count << endl;
	}
	return 0;
}
