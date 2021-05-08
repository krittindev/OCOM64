#include<bits/stdc++.h>
using namespace std;
int main(){
	bool isOut = false;
	string str;
	cin >> str;
	for(int i = 0; i < str.size() - 2; i++){
		if(	str[i] < str[i+1] &&
			str[i+1] < str[i+2] &&
			((str[i]%48) + (str[i+1]%48) + (str[i+2]%48)) > 10 &&
			!(str.substr(0, i+1).find(str.substr(i, 3)) != -1)){
			cout << str.substr(i, 3) << ' ';
			isOut = true;
		}
	}
	if(!isOut)
		cout << "NONE";
	return 0;
}
