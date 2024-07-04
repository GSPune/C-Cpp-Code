#include <bits/stdc++.h>
//wrapper around all the generic libraries in C++
using namespace std;
//to avoid later namespace resolution
#define endl '\n'
// '\n' is faster
#define FOR(i,a,b) for(int i=(a); i<(b); ++i)

void solve(){
    int n;
    cin >> n;
    if(n == 1){
        cout << "no" << endl;return;
    }
    if (n == 2){
        cout << "yes" << endl;
        return;
    }
    FOR(i,2,n){
        if(n%i==0){
            cout << "no" << endl;
            return;
        }
    }

    cout << "yes" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //bind cin and cout with scanf and printf..makes them faster
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}