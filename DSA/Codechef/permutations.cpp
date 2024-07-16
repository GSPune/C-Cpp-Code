#include <bits/stdc++.h>
//wrapper around all the generic libraries in C++
using namespace std;
//to avoid later namespace resolution
#define endl '\n'
// '\n' is faster
#define FOR(i,a,b) for(int i=(a); i<(b); ++i)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b) for(int i=(a); i>=(b); --i)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)
#define pb push_back

typedef vector<int> vi;
typedef vector<string> vs;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<ll> vll;
typedef vector<ull> vull;
const int MOD = 1e9+7;
const int N = 1e5;
ll f[N],fi[N];

ll pow(int a,int b){
    if (b==0) return 1;
    ll ans = pow(a,b/2);
    ans = (ans*ans)%MOD;
    if (b%2 == 1) ans = (ans*a)%MOD;
    return ans;
}

ll mod_inv(int a){
    return pow(a,MOD-2);
}

ll fact(int n){
    ll ans = 1;
    for(int i = 2; i <= n; ++i){
        ans = (ans*i)%MOD;
    }
    return ans;
}

void pre_fact(){
    f[0] = 1;
    FOR(i,1,N+1) f[i] = (i*f[i-1])%MOD;
}

//using modulo inverses precomputed..O(N+log p)
void precompute(){
    f[0] = 1;
    FOR(i,1,N+1) f[i] = (i*f[i-1])%MOD;
    fi[N] = mod_inv(f[N]);
    RFOR(i,N-1,0) fi[i] = ((i+1)*fi[i+1])%MOD;
}

ll ncr(int n, int r){
    //Use f[] instead of fact()
    //T.C = O(N*log(p) + T)...can be improved by using f^-1[i]
    ll nf = f[n];
    // ll nrf = mod_inv(f[n-r]);
    // ll rf = mod_inv(f[r]);
    ll nrf = fi[n-r];
    ll rf = fi[r];
    // cout << nf <<" " <<  nrf << " " << rf << endl;
    return (rf*((nf*nrf)%MOD))%MOD;
}

void solve(){
    int n,r;
    cin >> n >> r;
    cout << ncr(n,r) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //bind cin and cout with scanf and printf..makes them faster
    int t;
    precompute();
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}