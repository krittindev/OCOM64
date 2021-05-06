#include<bits/stdc++.h>
using namespace std;
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permuta(string& str, int l, int r)
{
    int i;
    if (l == r)
        cout << str << endl;
    else
    {
        for(i = l; i <= r; i++)
        {
            swap(str[l], str[i]);
            permuta(str, l+1, r);
            swap(str[l], str[i]);
        }
    }
}
int main()
{
    string str;
    cin >> str;
    permuta(str,0,str.size()-1);
    return 0;
}
