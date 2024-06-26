//A. Soccer (Div2).

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long x1,x2,y1,y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    // if(y1 < x1 && y1 < x2 && y2 < x1 && y2 < x2){
    //     cout << "YES" << endl;
    // }
    if(x1 < y1 && y1 < x2 && x1 < y2 && y2 < x2){ //simpler is just x1 < y1 && y2 < x2
        cout << "NO" << endl;
    }
    else if(y1 < x1 && x2 < y2){
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
}

int main(){
    int cases;
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++){
        solve();
    }
    return 0;
}