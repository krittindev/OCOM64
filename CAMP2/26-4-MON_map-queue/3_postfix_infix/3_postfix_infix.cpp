#include<bits/stdc++.h>
using namespace std;
struct Node{
    string exps;
    char oprt;
    Node(){
    }
    Node(string exps_){
        exps = exps_;
    }
    Node(string exps_, char oprt_){
        exps = exps_;
        oprt = oprt_;
    }
    bool isNeedBracket(char oprt_){
        if((oprt == '+' || oprt == '-' ) && (oprt_ == '*' || oprt_ == '/' ))
            return true;
        return false;
    }
    void brackets(char oprt_){
        if(isNeedBracket(oprt_))
            exps = "( " + exps + " )";
    }
};
int main(){
	string str;
	getline(cin , str);
	Node temp1, temp2;
	stack<Node> oprn;
	for(int i = 0; i < str.size(); i+=2)
        if(isalnum(str[i]))
            oprn.push(Node(str.substr(i,1)));
        else{
            temp2 = oprn.top();
            oprn.pop();
            temp1 = oprn.top();
            oprn.pop();
            temp2.brackets(str[i]);
            temp1.brackets(str[i]);
            oprn.push(Node(temp1.exps + " " + str[i] + " " + temp2.exps, str[i]));
        }
    cout << oprn.top().exps << ' ';
	return 0;
}
