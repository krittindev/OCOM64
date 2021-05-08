#include<bits/stdc++.h>
using namespace std;
long gcd(long a, long b);
int main(){
	long a,b;
	cin >> a >> b;
	cout << gcd(a,b);
	return 0;
}
long gcd(long a, long b){
	if(a%b==0)
		return b;
	return gcd(b, a%b);
}
