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

int gcd(int a,int b){
    if(b == 0){
        return a;
    }
    return gcd(b,a%b);
}

int ext_gcd(int a, int b, int &x, int &y){
    if(b == 0){
        x = 1;
        y = 0; // can be any value k
        return a;
    }
    int x0,y0;
    int g = ext_gcd(b,a%b,x0,y0);
    x = y0;
    y = x0 - (a/b)*y0;
    return g;
}

void solve(){
    int a,b,c;
    cin >> a >> b >> c;

    int x,y,g;
    // ext_gcd(max(a,b),min(a,b),x,y);;//x1,y1 which are particular solutions
    if(a>b)
       g = ext_gcd(a,b,x,y);
    else
       g = ext_gcd(b,a,y,x);
    x *= (c/g); y *= (c/g);
    cout << "x1:" << x << ",y1:" << y << endl;

    if(c%g==0){
        int left_limit = floor(-1*(x*g)/b)+1;
        int right_limit = ceil((y*g)/a)-1;

        // cout << left_limit << " ," << right_limit << endl;
        cout << (right_limit-left_limit+1) << endl;
        for(int k = left_limit; k <= right_limit; ++k){
            cout << x + (b/g)*k << " " << y - (a/g)*k << endl;
        }
    }
    else
        cout << "0"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //bind cin and cout with scanf and printf..makes them faster
    // int t;
    // cin >> t;
    // FOR(i,1,t+1){
    //     cout << "Case " << i <<": ";
    //     solve();
    // }
    solve();
    return 0;
}