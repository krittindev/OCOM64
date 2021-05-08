#include<bits/stdc++.h>
using namespace std;
int main(){
	int alp[26] = {0};
	bool isPangram = true;
	string str;
	getline(cin , str);
	for(int i = 0; i < str.size(); i++)
		if(isalpha(str[i]))
			alp[toupper(str[i])-65]++;
	for(int i = 0; i < 26; i++)
		if(!alp[i])
			isPangram = false;
	cout << (isPangram? "pangram": "not pangram");
	return 0;
}
