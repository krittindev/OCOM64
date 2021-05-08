#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, w;
	string str, v = "aeiou";
	bool isLastV;
	cin >> n;
	while(n--){
		cin >> str;
		w = 0;
		isLastV = v.find(str[0])!=-1? true: false;
		for(int i = 0; i < str.size(); i++){
			if(v.find(str[i]) == -1 && isLastV)
				w++;
			isLastV = v.find(str[i])!=-1? true: false;
		}
		if(isLastV)
			w++;
		cout << w << endl;
	}
	return 0;
}
