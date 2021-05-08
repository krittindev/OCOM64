#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	string temp1, temp2;
	map<string,string> serv;
	map<string,string> cmd;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> temp1 >> temp2;
		serv[temp2] = temp1;
	}
	for(int i = 0; i < m; i++){
		cin >> temp1 >> temp2;
		cmd[temp1] = temp2;
	}
	for(auto &it: cmd){
		cout << it.first << ' ' << it.second << ' ';
        if(serv.find(it.second) != serv.end())
            cout << '#' << serv[it.second] << endl;
        else
            cout << "#error" << endl;
	}
	return 0;
}

