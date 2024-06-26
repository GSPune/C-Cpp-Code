//326.Given an integer n, return true if it is a power of 4. Otherwise, return false.
#include <bits/stdc++.h>
using namespace std;

// bool PoT(int n,int count = 0,int ans = 1){
//     if(ans > n)
//         return false;
//     if(ans == n)
//         return true;
//     return PoT(n,count+1,ans*4);
// }

bool isPowerOfFour(int n) {
   if(n <= 0)
        return false;
    double v = log(n)/log(4);
    // cout << v;
    return v == int(v);
}

int main(){
    double num;
    cout << "Enter n: ";
    cin >> num;
    cout << isPowerOfFour(num) <<endl;
    return 0;
}