#include<bits/stdc++.h>
using namespace std;
int main(){
	int sol[3], bgn[3], rnd[3];
	char drt[3];
	for(int i = 0; i < 3; i++)
		cin >> bgn[i];
	for(int i = 0; i < 3; i++)
		cin >> sol[i];
	for(int i = 0; i < 3; i++)
		cin >> drt[i] >> rnd[i];
	for(int i = 0; i < 3; i++)
		if(drt[i] == 'F')
			bgn[i] = (bgn[i] + rnd[i])%10;
		else
			bgn[i] = ((bgn[i] - rnd[i])%10+10)%10;
	for(int i = 0; i < 3; i++)
		cout << bgn[i] << ' ';
	if(sol[0] == bgn[0] && sol[1] == bgn[1] && sol[2] == bgn[2])
		cout << 'O';
	else
		cout << 'N';
	return 0;
}
