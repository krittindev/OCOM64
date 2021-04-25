#include<bits/stdc++.h>
using namespace std;
string decompression(string str){
    string result = "";
    int n = 1;
	for(int i = 0; i < str.size(); i++)
		if(isalpha(str[i])){
            if(i>0 && isdigit(str[i-1]))
                n = str[i-1]%48;
            if(i>1 && isdigit(str[i-2]) && isdigit(str[i-1]))
                n = (str[i-2]%48)*10 + str[i-1]%48;
			for(int j = 0; j < (n? n: 1); j++)
                result += str[i];
            n = 1;
		}
    return result;
}
int main(){
	string str;
	cin >> str;
	cout << decompression(str);
	return 0;
}

