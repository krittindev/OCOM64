#include<bits/stdc++.h>
using namespace std;
int main(){
	int bgn[3], sol[3], n, ind[100], rnd[100];
	char drt[100];
	for(int i = 0; i < 3; i++)
		cin >> bgn[i];
	for(int i = 0; i < 3; i++)
		cin >> sol[i];
    cin >> n;
	for(int i = 0; i < n; i++)
		cin >> ind[i] >> drt[i] >> rnd[i];
	for(int i = 0; i < n; i++)
		if(drt[i] == 'F')
			bgn[ind[i]-1] = (bgn[ind[i]-1] + rnd[i])%10;
		else
			bgn[ind[i]-1] = ((bgn[ind[i]-1] - rnd[i])%10+10)%10;
	for(int i = 0; i < 3; i++)
		cout << bgn[i] << ' ';
	if(sol[0] == bgn[0] && sol[1] == bgn[1] && sol[2] == bgn[2])
		cout << 'O';
	else
		cout << 'N';
	return 0;
}
