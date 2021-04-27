#include<bits/stdc++.h>
using namespace std;

long gcd(long a, long b);

//void printFactor(long n, long d);

/*
bool isPrime(long n);
void printFactorWithSet(long n);
void setPrimes(long a, long b);
*/
bool isPrimeArr(long n);
void printFactorArr(long n);
void setPrimesArr(long a, long b);
/*
vector<long> primes;
*/
long arrPrimes[100000];
int arrSize = 0;
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
    /*
    setPrimes(a,b);
    printFactorWithSet(a);
    printFactorWithSet(b);
    if(gcd(a, b) == 1)
        cout << "null";
    else
        printFactorWithSet(gcd(a, b));
    */
    setPrimesArr(a,b);
    printFactorArr(a);
    printFactorArr(b);
    if(gcd(a, b) == 1)
        cout << "null";
    else
        printFactorArr(gcd(a, b));
	return 0;
}
long gcd(long a, long b){
	if(a%b==0)
		return b;
	return gcd(b, a%b);
}
void printFactorArr(long n){
    long sq = sqrt(n);
    for(int i = 0; i < arrSize; i++){
        if(n==1 || arrPrimes[i] > sq)
            break;
        while(n%arrPrimes[i]==0){
            n/=arrPrimes[i];
            cout << arrPrimes[i] << ' ';
        }
    }
    if(n!=1)
        cout << n << ' ';
    cout << "\n";
}
void setPrimesArr(long a, long b){
    if(2 <= sqrt(a>b? a: b)){
        arrPrimes[arrSize] = 2;
        arrSize++;
    }
    for(int i = 3; i <= sqrt(a>b? a: b); i+=2)
        if(isPrimeArr(i)){
            arrPrimes[arrSize] = i;
            arrSize++;
        }
}
bool isPrimeArr(long n){
    for(int i = 0; i < arrSize; i++)
        if(n%arrPrimes[i]==0)
            return false;
    return true;
}
/*
void printFactorWithSet(long n){
    long sq = sqrt(n);
    for(auto it: primes){
        if(n==1 || it > sq)
            break;
        while(n%it==0){
            n/=it;
            cout << it << ' ';
        }
    }
    if(n!=1)
        cout << n << ' ';
    cout << "\n";
}
void setPrimes(long a, long b){
    if(2 <= sqrt(a>b? a: b))
        primes.push_back(2);
    for(int i = 3; i <= sqrt(a>b? a: b); i+=2)
        if(isPrime(i))
            primes.push_back(i);
}
bool isPrime(long n){
    for(auto it: primes)
        if(n%it==0)
            return false;
    return true;
}
*/
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
