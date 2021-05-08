#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	bool bv, bi, br, bu;
	string str;
	cin >> t;
	for(int i = 0; i <= t; i++){
		getline(cin , str);
		bv = false;
		bi = false;
		br = false;
		bu = false;
		for(int j = 0; j < str.size(); j++){
			if(!bv && str[j] == 'v')
				bv = true;
			if(bv && str[j] == 'i')
				bi = true;
			if(bi && str[j] == 'r')
				br = true;
			if(br && str[j] == 'u')
				bu = true;
			if(bu && str[j] == 's'){
                cout << i << endl;
                break;
            }
		}
	}
	return 0;
}
