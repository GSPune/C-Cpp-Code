#include <bits/stdc++.h>
using namespace std;

int reverse(int x){
    const int MAX = std::numeric_limits<int>::max();
    const int MIN = std::numeric_limits<int>::min();
    // int prev = x;
    if (x == 0)
        return 0;
    int len = to_string(abs(x)).length();
    if ((reverse(x/10) + (x % 10) * pow(10,len-1)) > MAX || (reverse(x/10) + (x % 10) * pow(10,len-1)) < MIN)
        return 0;
    return reverse(x/10) + (x % 10) * pow(10,len-1);
}

int main(void)
{
    int x = 321;
    cout << reverse(x) << endl;
    return 0;
}