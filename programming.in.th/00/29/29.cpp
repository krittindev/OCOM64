#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a<b){
        cout<<ceil((double)b/a);
    }
    else
        cout<<2;
    return 0;
}
