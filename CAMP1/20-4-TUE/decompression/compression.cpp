#include<bits/stdc++.h>
using namespace std;
string compression(string str){
    string result = "";
	char c = str[0];
	int n = 1;
	for(int i = 1; i < str.size(); i++)
		if(c == str[i])
			n++;
		else{
			if(n != 1)
				result += 48 + n;
			result += c;
			c = str[i];
			n = 1;
		}
	if(n != 1)
        result += 48 + n;
    result += c;
    return result;
}
string decompression(string str){
    string result = "";
    int n = 0;
	for(int i = 0; i < str.size(); i++)
		if(!isalpha(str[i]))
			n += n*10 + str[i]%48;
		else{
			for(int j = 0; j < (n? n: 1); j++)
                result += str[i];
            n = 0;
		}
    return result;
}
int main(){
	string str;
	cin >> str;
	cout << decompression(str);
	return 0;
}

