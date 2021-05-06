#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string str;
    cin >> str >> n;
    n--;
    sort(str.begin(), str.end());
    while (next_permutation(str.begin(), str.end()) && --n);
    cout << str;
    return 0;
}
