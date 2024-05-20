#include <bits/stdc++.h>
using namespace std;

void printnumbers(int m){
    if (m == 0)
        return;
    printnumbers(m-1);
    cout << m << endl;
    //to go from n to 1,call printnumber() below
}

int main(){
    int k = 10;
    printnumbers(k);
    return 0;
}