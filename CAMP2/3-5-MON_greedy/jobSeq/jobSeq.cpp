#include<bits/stdc++.h>
using namespace std;
struct Job{
    char id;
    int deadline, profit;
};
bool compareProfit(Job a, Job b){
    return a.profit > b.profit;
}
int main(){
    int n, sumDuration = 0, sumProfit = 0;
    cin >> n;
    Job jobs[n];
    for(int i = 0; i < n; i++)
        cin >> jobs[i].id >> jobs[i].deadline >> jobs[i].profit;
    sort(jobs, jobs + n, compareProfit);
    for(int i = 0; i < n; i++)
        if(sumDuration + 1 <= jobs[i].deadline){
            sumDuration++;
            sumProfit += jobs[i].profit;
        }
    cout << sumProfit;
    return 0;
}
