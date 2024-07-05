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

// const int N = 86028121;
const int N = 4000;
bool pr[N+1];
vector<int> primes;
// primes.push_back(-1);

bool isAlmostPrime(int k){
    int i = 1, c = 0;
    while(k > primes[i]){
        if(k % primes[i] == 0) ++c;
        // if(c == 2) return true;
        ++i;
    }
    return (c == 2);
}

void sieve(){
    FOR(i,2,N+1) pr[i] = true;
    // FOR(i,2,N+1)
    for(int i = 2; i*i <= N; ++i)
        if(pr[i])
            FORk(j,i*i,N+1,i)
                pr[j] = false;

    primes.push_back(-1);
    FOR(i,2,N+1)
        if(pr[i])
            primes.push_back(i);
    
    // cout << primes.size()-1 << endl;
    // cout << primes[3000] << endl;
}

void solve(){
    int n,count = 0;
    cin >> n;
    FOR(i,6,n+1){
        if(isAlmostPrime(i))
            count++;
    }
    
    cout << count << endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //bind cin and cout with scanf and printf..makes them faster
    int t;
    cin >> t;
    sieve();
    while(t--){
        solve();
    }
    return 0;
}