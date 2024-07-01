/*Given an integer n, return the number of prime numbers that are strictly less than n.*/
#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
    vector<bool> isPrime(n+1,true);
    int count = 0;
    for(int i = 2; i*i < n;++i){
        if(isPrime[i]){
            for(int j = i*2; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    } 

    for(int i = 2; i < n; ++i){
        if(isPrime[i])
            count++;
    }  
    return count;    
}