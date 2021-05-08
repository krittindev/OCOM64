#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k, temp;
	priority_queue<int> pqg; // Priority Queue of Great to Least
	priority_queue<int, vector<int>, greater<int>> pql; // Priority Queue of Least to Great
	cin >> n >> k;
	while(n--){// input number to each queue n times
        cin >> temp;
        pqg.push(temp);
        pql.push(temp);
	}
	while(--k){// pop number in each queue k-1 times
        pqg.pop();
        pql.pop();
	}
	cout << pqg.top() << endl << pql.top();
	return 0;
}


