#include<bits/stdc++.h>
using namespace std;
struct Apple{
    int day, n, exp;
    Apple(int day_, int n_, int exp_){
        day = day_;
        n = n_;
        exp = exp_;
    }
};
struct CompareExp{
    bool operator()(const Apple &a1, const Apple &a2){
        return a1.day > a2.day;
    }
};
int main(){
	int day, counter = 0, n, exp;
	priority_queue<Apple, vector<Apple>, CompareExp> apples;
	cin >> day;
	for(int i = 0; i < day; i++){
        cin >> n >> exp;
        apples.push(Apple(i+1, n, exp));
	}
	int i = 1;
	while(!apples.empty()){
        while(!apples.empty() && (!(apples.top().day + apples.top().exp - i > 0) || !apples.top().n)){
            apples.pop();
	    }
	    if(!apples.empty()){
            Apple temp(apples.top().day, apples.top().n - 1, apples.top().exp);
            apples.pop();
            apples.push(temp);
            counter++;
	    }
        i++;
	}
	cout << counter;
	return 0;
}



