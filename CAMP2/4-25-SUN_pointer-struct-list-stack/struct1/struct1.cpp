#include<bits/stdc++.h>
using namespace std;
typedef struct{
	float x, y;
}Point;
int main(){
	Point p;
	cin >> p.x >> p.y;
	if(p.x == 0 && p.y == 0)
		cout << 'O';
	else if(p.x == 0 || p.y == 0)
		if(p.x == 0)
			cout << 'X';
		else
			cout << 'Y';
	else if(p.x > 0)
		if(p.y > 0)
			cout << 1;
		else
			cout << 4;
	else
		if(p.y > 0)
			cout << 2;
		else
			cout << 3;
	return 0;
}
