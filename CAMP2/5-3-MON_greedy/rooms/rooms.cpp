#include<bits/stdc++.h>
using namespace std;
struct Room{
    int start, duration, finish;
};
bool compareStart(Room a, Room b){
    return a.start < b.start;
}
bool compareFinish(Room a, Room b){
    return a.finish < b.finish;
}
int main(){
    int t, n, sumDuration = 0, sumProfit = 0;
    cin >> t;
    while(t--){
        int maxf = 0, maxr = 0, c = 0;
        cin >> n;
        Room roomsStart[n], roomsFinish[n];
        for(int i = 0; i < n; i++)
            cin >> roomsStart[i].start;
        for(int i = 0; i < n; i++)
            cin >> roomsStart[i].duration;
        for(int i = 0; i < n; i++){
            roomsFinish[i].finish = roomsStart[i].start + roomsStart[i].duration;
            if(roomsFinish[i].finish > maxf)
                maxf = roomsFinish[i].finish;
        }
        sort(roomsStart, roomsStart + n, compareStart);
        sort(roomsFinish, roomsFinish + n, compareFinish);
        for(int i = 0; i < maxf; i++){
            for(int j = 0; j < n; j++)
                if(roomsStart[j].start == i)
                    c++;
            for(int j = 0; j < n; j++)
                if(roomsFinish[j].finish == i)
                    c--;
            if(maxr < c)
                maxr = c;
        }
        cout << maxr << endl;
    }
    return 0;
}
