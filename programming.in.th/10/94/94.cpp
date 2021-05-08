/*
 * =====================================================================================
 *
 *       Filename:  94.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/13/2021 08:44:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Krittin Kunaree (kk), krittinkunaree@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include<bits/stdc++.h>
#define swap(x, y) \
    x^=y;\
    y^=x;\
    x^=y;
#define print printf("%d %d %d %d %d\n", a, b, c, d, e);
using namespace std;
int main(){
    int a, b, c, d, e;
    cin>>a>>b>>c>>d>>e;
    do{
        if(a>b){
            swap(a, b);
            print
        }
        if(b>c){
            swap(b, c);
            print
        }
        if(c>d){
            swap(c, d);
            print
        }
        if(d>e){
            swap(d, e);
            print
        }
    }while(a>b||b>c||c>d||d>e);
    return 0;
}

