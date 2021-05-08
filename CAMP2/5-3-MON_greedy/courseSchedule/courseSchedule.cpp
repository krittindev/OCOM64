#include<bits/stdc++.h>
using namespace std;
struct Course{
    int duration, deadline;
};
bool compareDeadline(Course a, Course b){
    return a.deadline < b.deadline;
}
int main(){
    int n, sumDuration = 0, counter = 0;
    cin >> n;
    Course courses[n];
    for(int i = 0; i < n; i++)
        cin >> courses[i].duration >> courses[i].deadline;
    sort(courses, courses + n, compareDeadline);
    for(int i = 0; i < n; i++)
        if(sumDuration + courses[i].duration <= courses[i].deadline){
            sumDuration += courses[i].duration;
            counter++;
        }
    cout << counter;
    return 0;
}
