#include<bits/stdc++.h>
using namespace std;
int main(){
	long n;
	cin >> n;
	if(n%2==0){
        cout << "No";
        return 0;
    }
	for(int i = 3; i < sqrt(n); i+=2)
		if(n%i==0){
			cout << "No";
			return 0;
		}
	cout << "Yes";
	return 0;
}
