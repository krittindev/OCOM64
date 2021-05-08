#include<bits/stdc++.h>
using namespace std;
struct Apple{
    int day, n, exp;
    Apple(int day_, int n_, int exp_){ //constructor
        day = day_;
        n = n_;
        exp = exp_;
    }
};
struct CompareDay{
    bool operator()(const Apple &a1, const Apple &a2){
        return a1.day > a2.day;
    }
};
int main(){
	int day, n, exp, eaten = 0;
	priority_queue<Apple, vector<Apple>, CompareDay> apples; // Priority Queue of Apples ordered by day
	cin >> day;
	for(int i = 0; i < day; i++){
        cin >> n >> exp;
        apples.push(Apple(i+1, n, exp));// input day(i), number of apple(n), exp(exp)
	}
	int i = 1;
	while(!apples.empty()){// do until Apples is empty

        while(!apples.empty() && // if it's not empty and
            (!(apples.top().day + apples.top().exp - i > 0) || // if it's out of exp or
            !apples.top().n)){ // if it's out of stock then pops it
            apples.pop();
	    }

	    if(!apples.empty()){ // if it's not empty
            eaten++; // eat it and then edit data
            Apple temp(apples.top().day, apples.top().n - 1, apples.top().exp);
            apples.pop();
            apples.push(temp);
	    }
        i++;
	}
	cout << eaten;
	return 0;
}



