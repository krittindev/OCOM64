#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	string str1, str2;
	cin >> t;
	while(t--){
		bool isAnagram = true;
		cin >> str1 >> str2;
		for(int i = 0; i < str2.size(); i++)
			if(str1.find(str2[i]) != -1)
				str1.erase(find(str1.begin(), str1.end(), str2[i]));
			else{
				isAnagram = false;
				break;
			}
		if(str1.size() != 0)
			isAnagram = false;
		cout << (isAnagram? "Yes": "No") << endl;
	}
	return 0;
}
