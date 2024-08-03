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
const int MOD = 1e9+7;

const int P = 31;
const int N = 1e5;
vll PP(N+1,1);

ll poly_hash(string s){
   ll ans = 0;
   FOR(i,0,s.length()){
    ans = ans + ((s[i]-'a'+1)*PP[i])%MOD; 
   } 
   return ans;
}

void solve(){
    string s;
    cin >> s;
    cout << poly_hash(s) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //bind cin and cout with scanf and printf..makes them faster
    int t = 1;
    cin >> t;
    FOR(i,1,N+1) PP[i] = (PP[i-1]*P)%MOD;
    while(t--){
        solve();
    }
    return 0;
}