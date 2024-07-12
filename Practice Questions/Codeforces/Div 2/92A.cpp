//A. LCM Problem
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

int lcm(int a,int b){
    return abs(a*b)/gcd(a,b);
}

void solve(){
    int l,r;
    cin >> l >> r;
    int x = l, y = r;
    
    while(x < y){
        int lm = lcm(x,y);
        if(lm >= l && lm <= r){
            cout << x << " " << y << endl;
            return;
        }
        x++;y--;
    }

    cout << "-1 -1" << endl;
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