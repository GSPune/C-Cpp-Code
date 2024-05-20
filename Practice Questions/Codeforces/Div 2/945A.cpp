//A. Chess For Three (Div2)
//For each testcase, print one number — the maximum possible number of draws that could've happened, or −1
//if the scores aren't consistent with any valid set of games and results.


#include <bits/stdc++.h>
using namespace std;

void max_draws(vector<int> &P){
    int sum = accumulate(P.begin(), P.end(), 0);
    if (sum % 2 != 0){
        cout << -1 << endl;return;
    }
    else
        cout << min(P[0]+P[1],sum/2) << endl;
}

int main(){
    int cases;
    vector<int> scores(3,0);
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++){
        for (auto &e : scores){
            // cout << "val::" << e<<endl;
            cin >> e;
        }
        max_draws(scores);
    }
    return 0;
}