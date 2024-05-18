//A. Chess For Three (Div2)
//For each testcase, print one number — the maximum possible number of draws that could've happened, or −1
//if the scores aren't consistent with any valid set of games and results.


#include <bits/stdc++.h>
using namespace std;

void max_draws(vector<int> &P){
    int count = 0, t1 = 1, t2=2;
    while(P[t1] != 0){
        P[t1]--;P[t2]--;
        count++;
    }
    t1--;
    while(P[t2] != 0 && P[t1] != 0){
        P[t1]--;P[t2]--;
        count++;
    }
    cout << count << endl;
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
        // sum = accumulate(scores.begin(), scores.end(), 0);
        max_draws(scores);
    }
    return 0;
}