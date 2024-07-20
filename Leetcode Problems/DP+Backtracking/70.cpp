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

// typedef struct matrix{
//     int rows = 2;
//     vector<vector<int>> A(rows);
// } matrix;

using matrix =
struct {
    // vector<vector<int>> A{2,vector<int>(2)};
     vector<vector<int>> A;
};

matrix identity(){
    return {{{1,0},{0,1}}};
}

matrix mul(matrix& a,matrix& b){
    matrix c = {{{0,0},{0,0}}};
    FOR(i,0,2)
        FOR(j,0,2)
            FOR(k,0,2)
                c.A[i][j] += (a.A[i][k]*b.A[k][j]);

    return c;
}

matrix pow(matrix& a,int b){
    if(b == 0) return identity();
    matrix ans = pow(a,b/2);
    ans = mul(ans,ans);
    if(b%2!=0) ans = mul(ans,a);
    return ans;
}

int climbStairs(int n) {
    matrix t = {{{1,1},{1,0}}};
    if (n == 1) return 1;
    if (n == 2) return 2;
    t = pow(t,n-2);
    return 2*t.A[0][0] + 1*t.A[0][1];

}

void solve(){
    int n;
    cin >> n;
    cout << "NO of ways:: " << climbStairs(n)<< endl;
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