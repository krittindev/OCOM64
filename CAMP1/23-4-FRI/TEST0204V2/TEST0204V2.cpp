#include<bits/stdc++.h>
using namespace std;
long gcd(long a, long b);
//void printFactor(long n, long d);
bool isPrime(long n);
void printFactorWithSet(long n);
void setPrimes(long a, long b);
vector<long> primes;
int main(){
    long a, b;
    cin >> a >> b;
    /*
    printFactor(a, 2);
    printFactor(b, 2);
    if(gcd(a, b) == 1)
        cout << "null";
    else
        printFactor(gcd(a, b), 2);
    */
    setPrimes(a,b);
    printFactorWithSet(a);
    printFactorWithSet(b);
    if(gcd(a, b) == 1)
        cout << "null";
    else
        printFactorWithSet(gcd(a, b));
	return 0;
}
long gcd(long a, long b){
    //printf("\ngcd\ta : %lld\tb : %lld\n", a, b);
	if(a%b==0)
		return b;
	return gcd(b, a%b);
}
/*void printFactor(long n, long d){
    //printf("\nfactorize\tn : %lld\td : %lld\n", n, d);
	if(n == 1)
        cout << "\n";
    else
            if(isPrime(d) && n%d==0){
                cout << d << ' ';
                printFactor(n/d, d);
            }
            else
                printFactor(n, d + 1);
}*/
void printFactorWithSet(long n){
    long sq = sqrt(n);
    for(auto it: primes){
        //printf("\nprintFactorWithSet\tfor\tit : %lld\n", it);
        if(n==1 || it > sq)
            break;
        while(n%it==0){
            //printf("\nprintFactorWithSet\tfor\twhile\tn : %lld\n", n);
            n/=it;
            cout << it << ' ';
        }
    }
    if(n!=1)
        cout << n << ' ';
    cout << "\n";
}
void setPrimes(long a, long b){
    for(int i = 2; i <= sqrt(a>b? a: b); i++)
        if(isPrime(i))
            primes.push_back(i);
}
bool isPrime(long n){
    //printf("\nisPrime\tn : %lld\n", n);
    if(n == 2)
        return true;
    else if(n%2==0)
        return false;
    for(int i = 2; i <= sqrt(n); i+=2)
        if(n%i==0)
            return false;
    return true;
}
