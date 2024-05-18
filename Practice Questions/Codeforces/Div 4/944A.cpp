// Div4 A.Maximize? -- @1
//You are given two integers x and y. Output two integers: the minimum of x
// and y, followed by the maximum of x and y.

#include <bits/stdc++.h>
using namespace std;


int main(){
    int cases,x,y;
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++){
        //take in the length of the string
        cin >> x >> y;
        (x > y) ? cout << y << " " << x : cout << x << " " << y;
        cout << endl;
    }
    return 0;
}