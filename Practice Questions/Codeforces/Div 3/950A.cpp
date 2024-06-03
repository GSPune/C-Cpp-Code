// A. Problem Generator
// For each test case, output a single integer — the minimum number of problems that need to come up with to hold
// m rounds.

#include <bits/stdc++.h>
using namespace std;

void min_problems(int n,int m,string l){
    int min = 0;
    unordered_map<char,int> counts;

    for (int k = 65; k < 72; k++)
        counts[char(k)] = 0;

    for (const auto &e:l)
        counts[e]++;

    for (auto &t:counts){
        if(t.second < m)
            min += (m - t.second);   
    }

    cout << min << endl;
}

int main(){
    int cases,n,m;
    string levels;
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++){
        cin >> n >> m;
        cin >> levels;
        min_problems(n,m,levels);
    }
    return 0;
}