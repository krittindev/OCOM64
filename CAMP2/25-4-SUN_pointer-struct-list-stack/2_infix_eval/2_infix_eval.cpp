#include<bits/stdc++.h>
using namespace std;
void operate(stack<int>& digit, stack<char>& oprtr){
	int a, b;
	char c;
	c = oprtr.top();
	oprtr.pop();
	b = digit.top();
	digit.pop();
	a = digit.top();
	digit.pop();
	switch(c){
		case '+':
			digit.push(a+b);
			break;
		case '-':
			digit.push(a-b);
			break;
		case '*':
			digit.push(a*b);
			break;
		case '/':
			digit.push(a/b);
			break;
	}
}
int main(){
	stack<int> digit;
	stack<char> oprtr;
	string str;
	const string OPRTR = "+-*/";
	getline(cin, str);
	for(char& c: str)
		if(c != '(')
			if(isdigit(c))
				digit.push(c - 48);
			else if(OPRTR.find(c) != -1)
				oprtr.push(c);
			else
				operate(digit, oprtr);
	cout << digit.top();
	return 0;
}

