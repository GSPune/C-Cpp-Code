// B. Maximum Multiple Sum -- @1
// For each test case, output an integer, the optimal value of x
// The sum of multiples of x that are less than or equal to n is maximized. 
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int ans = 0,k = 1,sum = 0,max = 0,x;
    for (x = 2; x < (n+1); x++){
        while(k <= (n/x)){
            sum = x*((k*(k+1))/2);
            if(max < sum){
                max = sum;
                ans = x;
            }
            k++;
        }
    }
    cout << x << endl;
}

int main(){
    int cases;
    
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++)
        solve();
    return 0;
}