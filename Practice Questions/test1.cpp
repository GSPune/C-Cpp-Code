#include <bits/stdc++.h>
using namespace std;

int f(int &x, int c){
    c--;
    if (c == 0) return 1;
    x++;
    return f(x,c) * x;
}

int main(){
    int a = 4;
    cout << f(a,a) << endl;
    return 0;
}