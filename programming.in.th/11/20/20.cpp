/*
 * =====================================================================================
 *
 *       Filename:  20.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/13/2021 08:43:43 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Krittin Kunaree (kk), krittinkunaree@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <bits/stdc++.h>

using namespace std;
int divCount(int n)
{
    bool hash[n + 1];
    memset(hash, true, sizeof(hash));
    for (int p = 2; p * p < n; p++)
        if (hash[p] == true)
            for (int i = p * 2; i < n; i += p)
                hash[i] = false;
    int total = 1;
    for (int p = 2; p <= n; p++) {
        if (hash[p]) {

            int count = 0;
            if (n % p == 0) {
                while (n % p == 0) {
                    n = n / p;
                    count++;
                }
                total = total * (count + 1);
            }
        }
    }
    return total;
}

int main()
{
    int n, arr[100][3], i, j, counter;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    for(i=0;i<n;i++){
        counter = 0;
        for(j=arr[i][0];j<=arr[i][1];j++){
            if(divCount(j)==arr[i][2]) counter++;
        }
        cout << counter << '\n';
    }
    return 0;
}

