#include<bits/stdc++.h>
using namespace std;
int main(){
	bool isOpen = true;
	string line;
	while(getline(cin, line)){
		for(char c: line)
			if(c == '"'){
				if(isOpen)
					cout << "``";
				else
					cout << "''";
				isOpen = !isOpen;
			}else
				cout << c;
		cout << endl;
	}	
	return 0;
}
