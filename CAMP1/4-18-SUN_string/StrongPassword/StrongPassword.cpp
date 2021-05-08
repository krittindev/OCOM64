#include<bits/stdc++.h>
using namespace std;
int main(){
	int condi;
	string str;
	string special_case = "!@#$%^&*()-+";
	cin >> str;
	bool hasNumber = false, hasLower = false, hasUpper = false, hasSpecial = false;
	for(int i = 0; i < str.size(); i++)
		if('0' <= str[i] && str[i] <= '9')
			hasNumber = true;
		else if('A' <= str[i] && str[i] <= 'Z')
			hasUpper = true;
		else if('a' <= str[i] && str[i] <= 'z')
			hasLower = true;
        else if(special_case.find(str[i]) != -1)
			hasSpecial = true;
	condi =  4 - (hasNumber + hasLower + hasUpper + hasSpecial);
	if(str.size() < 6)
		if(6 - str.size() > condi)
			cout << 6 - str.size();
		else
			cout << condi;
	else
		cout << condi;
	return 0;
}
