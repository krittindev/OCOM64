#include<bits/stdc++.h>
using namespace std;
void operate(stack<int>& stk, char c){
	int a, b;
	b = stk.top();
	stk.pop();
	a = stk.top();
	stk.pop();
	switch(c){
		case '+':
			stk.push(a+b);
			break;
		case '-':
			stk.push(a-b);
			break;
		case '*':
			stk.push(a*b);
			break;
		case '/':
			stk.push(a/b);
			break;
	}
}
int main(){
	stack<int> stk;
	string str;
	getline(cin, str);
	for(char& c: str)
		if(c != ' ')
			if(isdigit(c))
				stk.push(c - 48);
			else
				operate(stk, c);
	cout << stk.top();
	return 0;
}

