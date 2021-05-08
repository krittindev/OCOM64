#include<bits/stdc++.h>
using namespace std;
int main(){
	map<char,int> prec = {
		{'*', 2},
		{'/', 2},
		{'+', 1},
		{'-', 1},
		{'(', 0},
		{')', 0},
	};
	string str;
	getline(cin , str);
	stack<char> oprt;
	for(int i = 0; i < str.size(); i+=2)
        if(isalnum(str[i]))
            cout << str[i] << ' ';
        else
            if(oprt.empty() || str[i] == '(' || prec[str[i]] > prec[oprt.top()])
                oprt.push(str[i]);
            else if(str[i] == ')'){
                while(oprt.top() != '('){
                    cout << oprt.top() << ' ';
                    oprt.pop();
                }
                oprt.pop();
            }
            else{
                while(!oprt.empty() && prec[str[i]] <= prec[oprt.top()]){
                    cout << oprt.top() << ' ';
                    oprt.pop();
                }
                oprt.push(str[i]);
            }
    while(!oprt.empty()){
        cout << oprt.top() << ' ';
        oprt.pop();
    }
	return 0;
}
