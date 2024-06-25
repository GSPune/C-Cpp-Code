//B. Collatz Conjecture

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long x,y,k;
    cin >> x >> y >> k;

    for(int i = 0; i < k; ++i){
        x++;
        while(x % y == 0){
            x /= y;
        }
    }
    cout << x << endl;
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