#include<bits/stdc++.h>
using namespace std;
void combination(string& data, string& output, int start, int stop, int idx, int r){
    if(idx == r){
        cout << output << endl;
        return ;
    }
    int i = start;
    while(i <= stop && (stop-i+1) >= (r - idx)){
        output[idx] = data[i];
        combination(data, output, i + 1, stop, idx + 1, r);
        i++;
    }
}
void printCombination(string& data, int n, int r){
    string output;
    for(int i = 0; i < r; i++)
        output += " ";
    combination(data, output, 0, n - 1, 0, r);
}
int main()
{
    int n, r;
    string str;
    cin >> str >> r;
    n = str.size();
    printCombination(str, n, r);
    return 0;
}
