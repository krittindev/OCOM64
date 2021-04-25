#include<bits/stdc++.h>
using namespace std;
long lcm(long a, long b);
long gcd(long a, long b);
int main(){
	long a, b;
	cin >> a >> b;
	cout << lcm(a, b);
	return 0;
}
long lcm(long a, long b){
	long g = gcd(a, b);
	return a*b/g;
}
long gcd(long a, long b){
	if(a%b == 0)
		return b;
	return gcd(b, a%b);
}
