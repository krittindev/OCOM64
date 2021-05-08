#include<iostream>
using namespace std;
int main(){
    int len,num,i,j,diff;
    string current,input;
    cin>>len>>num;
    cin>>current;
    for(i=0;i<num;i++){
        cin>>input;
        for(j=0,diff=0;j<len;j++){
            if(current[j]!=input[j])
                    diff++;
            if(diff>2){
                cout<<current;
                return 0;
            }
        }
        current=input;
    }
    cout<<input;
    return 0;
}
