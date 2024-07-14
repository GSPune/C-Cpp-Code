//Count the number of numbers in range [l,r] whose sweetness factor(euler's totient func) is a prime number.
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

int phi(int n){
    int ans = n;
    for(int i=2;i*i<=n;++i){
        if(n%i == 0){
            while(n%i == 0){
                n /= i;
            }
            ans -= (ans/i);
        }
    }
    if (n > 1) ans = ans - (ans/n);
    return ans;
}

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    if (n == 2){
        return true;
    }
    FOR(i,2,sqrt(n)){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void solve(){
    int n,q;
    cin >> n >> q;
    vi a(n+1);
    //1 indexed array
    FOR(i,1,n+1) cin >> a[i];
    // vector<bool> ip(n);
    //prefix array mapping to 1s and 0s
    vi pre(n+1,0);
    FOR(i,1,n+1){
        pre[i] = pre[i-1];
        if(isPrime(phi(a[i])))
            pre[i]++;
    }
    int l,r;
    FOR(i,1,q+1){
        cin >> l >> r;
        cout << pre[r]-pre[l-1] << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //bind cin and cout with scanf and printf..makes them faster
    // int t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }
    solve();
    return 0;
}