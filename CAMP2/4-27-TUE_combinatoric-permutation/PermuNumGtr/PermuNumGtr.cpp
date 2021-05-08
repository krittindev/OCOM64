#include<bits/stdc++.h>
using namespace std;
int k, counter = 0;
int strToInt(string str){
    int n = 0;
    for(int i = 0; i < str.size(); i++)
        n = n * 10 + (str[str.size() - 1 - i] - '0');
    return n;
}
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permuta(string& str, int l, int r)
{
    if (l == r && strToInt(str) > k)
        counter++;
    else
        for(int i = l; i <= r; i++){
            swap(str[l], str[i]);
            permuta(str, l+1, r);
            swap(str[l], str[i]);
        }
}
int main()
{
    int n;
    cin >> n >> k;
    string str;
    for(int i = 0; i < n; i++)
        str += to_string(i + 1);
    permuta(str,0,str.size()-1);
    cout << counter;
    return 0;
}
