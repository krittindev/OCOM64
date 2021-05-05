#include<bits/stdc++.h>
using namespace std;
int diff1(int a, int b){
    return ((((a > b)? a - b: b - a) == 1)? 1: 0);
}
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
        cin >> arr[i][j];
    int s[n][n], maxm = INT_MIN, mi, mj;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(i == 0 && j == 0)
                s[i][j] = 0;
            else if(i == 0)
                s[i][j] = diff1(arr[i][j], arr[i][j - 1])? s[i][j - 1] + 1: 0;
            else if(j == 0)
                s[i][j] = diff1(arr[i][j], arr[i - 1][j])? s[i - 1][j] + 1: 0;
            else if(diff1(arr[i][j], arr[i][j - 1]) || diff1(arr[i][j], arr[i - 1][j])){
                if(diff1(arr[i][j], arr[i][j - 1])){
                    s[i][j] = s[i][j - 1] + 1;
                    maxm = max(maxm, s[i][j]);
                    mi = i;
                    mj = j;
                }
                if(diff1(arr[i][j], arr[i - 1][j])){
                    s[i][j] = s[i - 1][j] + 1;
                    maxm = max(maxm, s[i][j]);
                    mi = i;
                    mj = j;
                }
            }
            else
                s[i][j] = 0;
    vector<int> v;
    auto it = v.begin();
    while(s[mi][mj] != 0){
        //cout << " B4 \t" << mi << ' ' << mj << endl;
        while(s[mi][mj] != 0 && diff1(arr[mi][mj], arr[mi - 1][mj]) && s[mi - 1][mj] == s[mi][mj] - 1){
            //cout << " 1 \t" << mi << ' ' << mj << endl;
            v.push_back(arr[mi][mj]);
            mi--;
        }
        while(s[mi][mj] != 0 && diff1(arr[mi][mj], arr[mi][mj - 1]) && s[mi][mj - 1] == s[mi][mj] - 1){
            //cout << " 2 \t" << mi << ' ' << mj << endl;
            v.push_back(arr[mi][mj]);
            mj--;
        }
        //cout << " AFT \t" << mi << ' ' << mj << endl;
    }
    v.push_back(arr[mi][mj]);

    reverse(v.begin(), v.end());

    for(auto it: v)
        cout << it << ' ';
    cout << endl;
    /*
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << s[i][j] << ' ';
        cout << endl;
    }
    //*/
    cout << maxm;
    return 0;
}

