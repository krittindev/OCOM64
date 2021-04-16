#include<bits/stdc++.h>
using namespace std;
int main(){
	int p, hOdd, hEven, cStatus = 2, c=1;
	cin>>p;
	hOdd = p;
	hEven = p;
	while(1){
		cin>>p;
		cStatus = cStatus==2? p&1: cStatus;
		if(p&1){
			if(cStatus){
				if(c>2)
					hEven-=3;
				else
					hEven--;
				c++;
			}
			else{
				hEven--;
				c=2;
				cStatus=1;
			}
		}
		else{
			if(!cStatus){
				if(c>2)
					hOdd-=3;
				else
					hOdd--;
				c++;
			}
			else{
				hOdd--;
				c=2;
				cStatus=0;
			}
		}
		//printf("p: %d, cStatus: %d, last c: %d, hOdd: %d, hEven: %d\n", p, cStatus, c, hOdd, hEven);
		if(hOdd<1||hEven<1){
			cout<<cStatus<<'\n'<<p<<'\n';
			return 0;
		}
	}
	return 0 ;
}
