#include<bits/stdc++.h>
using namespace std;
struct Activity{
    int start, finish;
};
bool compareFinish(Activity a, Activity b){
    return a.finish < b.finish;
}
int main(){
    int n, maxf = 0, counter = 0;
    cin >> n;
    Activity activitys[n];
    for(int i = 0; i < n; i++)
        cin >> activitys[i].start >> activitys[i].finish;
    sort(activitys, activitys + n, compareFinish);
    for(int i = 0; i < n; i++)
        if(activitys[i].start >= maxf){
            maxf = activitys[i].finish;
            counter++;
        }
    cout << counter << endl;
    maxf = 0;
    for(int i = 0; i < n; i++)
        if(activitys[i].start >= maxf){
            maxf = activitys[i].finish;
            cout << activitys[i].start << ' ' << activitys[i].finish << endl;
        }
    return 0;
}
