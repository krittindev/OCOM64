#include<bits/stdc++.h>
using namespace std;
int LCS(string, string);
int main(){
    string a, b;
    cin >> a >> b;
    cout << LCS(a, b);
    return 0;
}

int LCS(string a, string b){
    int E[101][101] = {0}, i, j;
    for(i = 0; i < a.size(); i++)
    for(j = 0; j < b.size(); j++){
        if(a[i] == b[j])
            E[i+1][j+1] = E[i][j] + 1;
        else
            E[i+1][j+1] = max(E[i][j+1], E[i+1][j]);
    }
    return E[i][j];
}
