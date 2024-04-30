#include "Primes.hpp"

primeGen::primeGen(){
	n = 0;
} 

void primeGen::getNFromUser(){
	bool flag = true;
	do{
		cout << "Enter a positive integer n"<< endl;
		cin >> n;
		if (n > 0)
			flag = false;
		else
			cout << "---Please enter a valid input (again)---" << endl;
	}while(flag);
}

bool primeGen::isPrime(int k){
	int count = 0;
	for (int i = 2; i < k;i++){
		if (k % i == 0)
			count++;
	}
	if (count > 0)
		return false;
	else
		return true;
}

void primeGen::generateNPrimes(){
	
	cout << "The first " << n << " prime numbers are:" << endl;
	
	int c = 0;
	
	for (int j = 2; j > 0;j++){
		if(isPrime(j)){
			cout << j << " ";
			c++;
		}
		if(c == n){
			cout << endl;
			break;
		}
	}	 
	
}