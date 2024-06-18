//Given a non-negative integer c, decide whether there're two integers 
//a and b such that a^2 + b^2 = c.

#include<bits/stdc++.h>
using namespace std;

bool judgeSquareSum(int c){
    long a = 0, b = sqrt(c), total;

    while(a <= b){
        total = a*a + b*b;
        if(total < c)
            a++;
        else if(total > c)
            b--;
        else
            return true;
    }
    return false;
}

int main(){
    int k = 1+1;
    cout << judgeSquareSum(k);
    return 0;
}

