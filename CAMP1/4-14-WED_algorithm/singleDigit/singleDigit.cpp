#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, num, sum;
    cin >> n;
    while(n--){
        cin >> num;
        while(num>9){
            sum = 0;
            while(num!=0){
                sum += num%10;
                num /= 10;
            }
            num = sum;
        }
        cout << num << '\n';
    }
    return 0;
}
