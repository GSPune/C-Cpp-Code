/*Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1],
then return 0.*/

#include <bits/stdc++.h>
using namespace std;

int reverse(long long int x,long long int k){
    const int MAX = numeric_limits<int>::max();
    const int MIN = numeric_limits<int>::min();
    // int prev = x;
    if (x == 0)
        return k;
    int len = to_string(abs(x)).length();
    if (k > (MAX) || k < (MIN))
        return 0;
    return reverse(x / 10, k + ((x % 10) * pow(10, len - 1)));
    //Tail Recursion
}

int main(void)
{
    long long int x = -321;
    cout << reverse(x,0) << endl;
    return 0;
}