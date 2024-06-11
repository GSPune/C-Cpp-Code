// A. Creating Words -- @1

#include <bits/stdc++.h>
using namespace std;


int main(){
    int cases;
    string f1,f2;
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++){
        cin >> f1 >> f2;
        if(f1[0] != f2[0])
            swap(f1[0],f2[0]);
        cout << f1 << " " << f2 << endl;
    }
    return 0;
}