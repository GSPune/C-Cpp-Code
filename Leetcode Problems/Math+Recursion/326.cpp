//326.Given an integer n, return true if it is a power of three. Otherwise, return false.
#include <bits/stdc++.h>
using namespace std;

bool PoT(int n,int count = 0,int ans = 1){
    if(ans > n)
        return false;
    if(ans == n)
        return true;
    return PoT(n,count+1,ans*3);
}

bool isPowerOfThree(int n) {
    if (n < 0){
        return false;
    }
    return PoT(n);
}

int main(){
    double num;
    cout << "Enter n: ";
    cin >> num;
    cout << isPowerOfThree(num) <<endl;
    return 0;
}