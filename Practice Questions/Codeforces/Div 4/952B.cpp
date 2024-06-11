// B. Maximum Multiple Sum -- @1
// For each test case, output an integer, the optimal value of x
// The sum of multiples of x that are less than or equal to n is maximized. 
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int ans = 0,sum = 0,m = 0,x;
    for (x = 2; x < (n+1); x++){
        // sum = (pow(n,2) + (x*n))/(2*x);
        int k = n/x;
        sum = (x)*((k*(k+1))/2);
        // m == max(m,sum) ? ans : ans = x;
        if(m < max(m,sum)){
            m = max(m,sum);
            ans = x;
        }
    }
    cout << ans << endl;
}

int main(){
    int cases;
    
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++)
        solve();
    return 0;
}