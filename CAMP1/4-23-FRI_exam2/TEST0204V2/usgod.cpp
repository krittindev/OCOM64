#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b){
    if(a%b == 0)
        return b;
    return gcd(b, a%b);
}
void printPrimeFac(long long int n){
    if(n == 1)
        cout << "null";
    if(n%2 == 0){
        while(n%2 == 0){
            cout << 2 << ' ';
            n /= 2;
        }
    }
    for(int i = 3; i <= n; i+=2){
        while(n%i == 0){
            cout << i << ' ';
            n /= i;
        }
    }
    cout << endl;
}
vector<long long int> vecPrimeFac(long long int n){
    vector<long long int> result;
    if(n%2 == 0){
        while(n%2 == 0){
            result.push_back(2);
            n /= 2;
        }
    }
    for(int i = 3; i <= n; i+=2){
        while(n%i == 0){
            result.push_back(i);
            n /= i;
        }
    }
    return result;
}
int main(){
    long long int a, b;
    bool isHave = false;
    cin >> a >> b;
    /*
    vector<long long int> va = vecPrimeFac(a), vb = vecPrimeFac(b);
    for(auto it: va)
        cout << it << ' ';
    cout << endl;
    for(auto it: vb)
        cout << it << ' ';
    cout << endl;
    for(int i = 0; i < va.size(); i++)
        for(int j = 0; j < vb.size(); j++){
            if(va[i] == vb[j]){
                isHave = true;
                cout << va[i] << " ";
                va.erase(va.begin()+i);
                vb.erase(vb.begin()+j);
            }
        }
    if(!isHave){
        cout << "null";
    }
    */
    printPrimeFac(a);
    printPrimeFac(b);
    printPrimeFac(gcd(a, b));
	return 0;
}
