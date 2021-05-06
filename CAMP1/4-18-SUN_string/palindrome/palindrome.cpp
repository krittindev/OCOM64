#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	bool isPalindrome;
	string str1;
	cin >> t;
	while(t--){
		isPalindrome = true;   
		cin >> str1;
		for(int i = 0; i < str1.size(); i++)
			if(str1[i] != str1[str1.size() - i - 1])
				isPalindrome = false;
		cout << (isPalindrome? "Yes" : "No") << endl;
	}
	return 0;
}

