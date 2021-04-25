#include<bits/stdc++.h>
using namespace std;
class Team{
public:
    char name;
    int win = 0, draw = 0, loss = 0, gain = 0, point = 0;
};
class Table{
    vector<Team> teams;
public:
    void setTeam(char c){
        Team temp;
        temp.name = c;
        teams.push_back(temp);
    }
    void scores(char teamA, char teamB, int scoreA, int scoreB){

    }
};
int main(){
	Table table;
    int n, sa, sb;
    char a, b;
    // setTeam
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        table.setTeam(a);
    }
    // scores
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> sa >> sb;
        table.scores(a, b, sa, sb);
    }
	return 0;
}
