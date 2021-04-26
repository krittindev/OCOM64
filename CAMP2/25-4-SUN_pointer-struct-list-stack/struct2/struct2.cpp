#include<bits/stdc++.h>
using namespace std;
typedef struct{
	string id, firstname, lastname;
	float test[2];

	float getsum(){
		return test[0] + test[1];
	}
	void print(){
		printf("%.2f ", getsum());
		cout << id << ' ' << firstname << ' ' << lastname << endl;
	}
	void scan(){
        cin >> id >> firstname >> lastname >> test[0] >> test[1];
	}
}Student;
float getavg(Student student[], int size){
	float sum = 0;
	for(int i = 0; i < size; i++)
		sum += student[i].getsum();
	return sum/size;
}
Student getbest(Student student[], int size){
	float max = 0;
	Student *best;
	for(int i = 0; i < size; i++)
		if(max < student[i].getsum()){
			best = &student[i];
			max = student[i].getsum();
		}
	return *best;
}
int main(){
	int n;
	cin >> n;
	Student student[n];
	for(int i = 0; i < n; i++)
		student[i].scan();

	getbest(student, n).print();

	float avg = getavg(student, n);
	for(int i = 0; i < n; i++)
		if(student[i].getsum() < avg)
			student[i].print();

	return 0;
}
