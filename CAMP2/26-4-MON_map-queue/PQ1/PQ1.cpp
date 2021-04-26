#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k, temp;
	priority_queue<int> pqg;
	priority_queue<int, vector<int>, greater<int>> pql;
	cin >> n >> k;
	while(n--){
        cin >> temp;
        pqg.push(temp);
        pql.push(temp);
	}
	while(--k){
        pqg.pop();
        pql.pop();
	}
	cout << pqg.top() << endl << pql.top();
	return 0;
}


