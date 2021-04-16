#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, i, j, a, b, nc, sum = 0, subsum;
	cin>>n>>m;
	int arr[100000][2];

	for(i=0;i<m;i++){
		cin>>arr[i][0]>>arr[i][1];
        printf("[%d,%d]\n", arr[i][0], arr[i][1]);
	}

	char c;
	cin>>c;
	nc = c=='R'? 0: c=='G'? 1: 2;

    for(i=0;i<n;i++){
        subsum = 0;
        for(j=0;j<m;j++){
            if(arr[j][0]<i+1 && i<arr[j][1]){
                printf("n:%d  m:%d  [%d,%d]\n", i+1, j+1, arr[j][0], arr[j][1]);
                subsum++;
            }
        }
        sum += ((nc-subsum)%3+3)%3;
    }

	cout<<sum;
	return 0;
}

