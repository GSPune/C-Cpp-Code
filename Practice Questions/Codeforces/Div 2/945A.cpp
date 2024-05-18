//A. Chess For Three (Div2)
//For each testcase, print one number — the maximum possible number of draws that could've happened, or −1
//if the scores aren't consistent with any valid set of games and results.


#include <bits/stdc++.h>
using namespace std;

void max_draws(int s,vector<int> P){
    if(s == 0)
        cout << -1 << endl;
    else{
        //greedy approach?--improve
        if(s % 2 == 0){
            int k = (P[2]+P[1])/2;
            cout << ((P[2]+P[1])/2 + (P[0]+P[1])/2) << endl;
        }
        else
            cout << -1 << endl;
    }
}

int main(){
    int cases,sum;
    vector<int> scores;
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++){
        for (int b = 0;b < 3; b++){
            int temp;
            cin >> temp;
            scores.push_back(temp);
            sum += temp;
        }
        // sum = accumulate(scores.begin(), scores.end(), 0);
        max_draws(sum,scores);
        sum = 0;
    }
    return 0;
}