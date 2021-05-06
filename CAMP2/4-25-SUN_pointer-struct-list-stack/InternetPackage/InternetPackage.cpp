#include<bits/stdc++.h>
using namespace std;
struct Package{
	string name;
	int sum;
	Package(){
		sum = 1;
	}
};
bool compareByName(Package left, Package right);
bool compareBySum(Package left, Package right);
void print(list<Package> packages);

int main(){
	int n;
	char c;
	list<Package> M, F;
	cin >> n;
	for(int i = 0; i < n ; i++){
		Package temp;
		cin >> temp.name >> c;
		bool isFound = false;
		switch(c){
			case 'M':
			    for(auto it = M.begin(); it != M.end(); it++){
                    if(it->name == temp.name){
                        it->sum++;
                        isFound = true;
                        break;
                    }
			    }
			    if(!isFound)
                    M.push_back(temp);
				break;
			case 'F':
			    for(auto it = F.begin(); it != F.end(); it++){
                    if(it->name == temp.name){
                        it->sum++;
                        isFound = true;
                        break;
                    }
			    }
			    if(!isFound)
                    F.push_back(temp);
				break;
		}
	}
	M.sort(compareByName);
	M.sort(compareBySum);
	F.sort(compareByName);
	F.sort(compareBySum);
	cout << "packages by women" << endl;
	print(F);
	cout << "packages by men" << endl;
	print(M);
	return 0;
}
bool compareByName(Package left, Package right){
	if(left.name < right.name)
		return true;
	return false;
}
bool compareBySum(Package left, Package right){
	if(left.sum > right.sum)
		return true;
	return false;
}
void print(list<Package> packages){
	for(auto it: packages)
		cout << it.name << ' ' << it.sum << endl;
}
