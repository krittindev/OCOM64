#include<bits/stdc++.h>
using namespace std;
string LCP(string, string);
string findLCPrecur(string*, int, int);
int main(){
    int n;
    cin >> n;
    string words[n], result = "";
    for(int i = 0; i < n; i++)
        cin >> words[i];
    result += findLCPrecur(words, 0, n - 1);
    if(result == "")
        cout << "none";
    else
        cout << result;
    return 0;
}
string LCP(string a, string b){
    int i = 0;
    while(a[i] == b[i]) i++;
    return a.substr(0, i);
}
string findLCPrecur(string words[], int low, int high){
    if(low > high){
        return "";
    }
    if(low == high){
        return words[low];
    }
    int mid = (low + high) / 2;
    string  X = findLCPrecur(words, low, mid),
            Y = findLCPrecur(words, mid + 1, high);
    return LCP(X, Y);
}
