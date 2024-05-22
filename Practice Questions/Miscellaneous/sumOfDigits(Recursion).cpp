//given a number return the sum of its digits using recursion

#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    // if (n == 0)
    if (n <= 9)
        return n;
    return sumOfDigits(n/10) + (n%10);
}

int main(){
    int k = 2583;
    cout << sumOfDigits(k) << endl;
    return 0;
}