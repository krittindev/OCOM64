#include<bits/stdc++.h>
using namespace std;

int main(){
	string str, result;
	const string OPERATION = "+-*/", COMPARE = "=<>", ALPHDGT = "1234567890QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm";
	getline(cin, str);
	int i = 0, j, istatus, jstatus, done = 0;
	while(i != str.size())
		if(COMPARE.find(str[i]) != -1){
			
			while(j >= 0){
				
		}
