//Palindrome Number
//Given an integer x, return true if x is a palindrome, and false otherwise.

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


bool isPalindrome(int x) {
    long int m = x;
    if (x < 0)
        return false;
    if (reverse(m,0) == x)
        return true;
    else
        return false;
}

int main(void)
{
    int x = 118151811;
    cout << isPalindrome(x) << endl;
    return 0;
}