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
#define pb push_back

typedef vector<int> vi;
typedef vector<string> vs;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<ll> vll;
typedef vector<ull> vull;
const int MOD = 7;//1e9+7;

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

void solve(){
    for(int j = 1; j < MOD; ++j){
        cout << pow(j,MOD-2) << endl;   
    }
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