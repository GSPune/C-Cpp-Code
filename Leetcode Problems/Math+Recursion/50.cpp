//Implement pow(x, n), which calculates x raised to the power n (i.e., x^n)

#include <bits/stdc++.h>
using namespace std;

double power(double x, long int n) {
    if(n == 0)
        return 1;
    return x*power(x,n-1);
}

double myPow(double x, int n) {
    long int nn = n;
    if (nn < 0){
        x = 1/x;
        nn = (-1)*nn;
    }
    return pow(x,nn);
}

int main(){
    double num;int p;
    cout << "Enter the base and exponent: ";
    cin >> num >> p;
    cout << myPow(num,p) <<endl;
    return 0;
}