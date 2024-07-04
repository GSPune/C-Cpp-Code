#include <bits/stdc++.h>
//wrapper around all the generic libraries in C++
using namespace std;
//to avoid later namespace resolution
#define endl '\n'
// '\n' is faster
#define FOR(i,a,b) for(int i=(a); i<(b); ++i)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b,k) for(int i=(a); i>=(b); --i)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)

const int N = 1000000;
bool pr[N+1];

void sieve(){
    FOR(i,2,N+1) pr[i] = true;
    // FOR(i,2,N+1)
    for(int i = 2; i*i <= N; ++i)
        if(pr[i])
            FORk(j,i*i,N,i)
                pr[j] = false;
}

void solve(){
    sieve();
    FOR(i,0,15) cout << pr[i] << " ";
    cout << endl;
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